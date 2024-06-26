# Вопросы и ответы

## Вопрос 1: APM Planner 2 не подключается к цифровому двойнику запущенному через `make offline` или `make online` (и аналоги).

Отключите firewall. В Ubuntu это можно сделать так:

```bash
sudo systemctl stop ufw
```

p.s. если вы хотите оставить включенным firewall, то нужно настроить разрешения для подключения к определённым портам:

```bash
sudo ufw allow 14550/udp
```

## Вопрос 2: Чем отличаются `make offline` и `make online`.

Запуск компонентов без ОрВД - `make offline`
Запуск всех компонентов, включая ОрВД - `make online`

Предполагается, что предварительно запущен APM Planner 2 из папки planner.

## Вопрос 3: Что такое `make e2e-offline` и `make e2e-online`

Таким образом запускаются сквозные автоматические тесты.
Эти тесты:

- запускают все необходимые компоненты,
- загружают полётное задание,
- запускают полётное задание,
- проверяют выполнение полётного задания
- и останавливают все компоненты.

При запуске этих тестов модуль безопасности собирается из исходников и данное тестирование упрощает проверку корректности его работы (не требуется каждый раз вручную задавать полётное задание и т.п.).

## Вопрос 4: `docker images` отображает много `none` занимающих много места, это нормально?

Docker при сборке создаёт образ т.н. слоями. Каждая из команд создаёт новый слой. Каждый из таких слоёв будет отображаться как `none`, однако размер будет показывать размер конечного образа.

Например, наш Dockerfile для симулятора выглядит так:

```Dockerfile
FROM ubuntu:22.04

ENV DEBIAN_FRONTEND noninteractive
ENV PATH="${PATH}:/opt/KasperskyOS-Community-Edition-1.2.0.45/toolchain/bin:/home/user/.local/bin"
RUN apt-get update && \
    apt install -y \
        net-tools \
        python3 \
        python3-dev \
        python3-pip \
        python3-serial \
        python3-opencv \
        python3-wxgtk4.0 \
        python3-matplotlib \
        python3-lxml \
        python3-pygame \
        sudo \
        mc \
        vim \
        curl \
        tar \
        expect \
        build-essential \
        device-tree-compiler \
        && adduser --disabled-password --gecos "" user \
        && echo 'user ALL=(ALL) NOPASSWD: ALL' >> /etc/sudoers

COPY ./KasperskyOS-Community-Edition-1.2.0.45.zip /tmp

RUN unzip /tmp/KasperskyOS-Community-Edition-1.2.0.45 -d /opt \
    && rm /tmp/*.zip \
    && ln -s /opt/KasperskyOS-Community-Edition-1.2.0.45 /opt/KasperskyOS-Local-Edition \
    && echo '/opt/KasperskyOS-Community-Edition-1.2.0.45/toolchain/lib' >> /etc/ld.so.conf.d/KasperskyOS.conf \
    && echo '/opt/KasperskyOS-Community-Edition-1.2.0.45/toolchain/x86_64-pc-linux-gnu/aarch64-kos/lib/' >> /etc/ld.so.conf.d/KasperskyOS.conf \
    && ldconfig

RUN su -c 'pip3 install PyYAML mavproxy pymavlink --user --upgrade' user

COPY ./ardupilot /home/user/ardupilot
COPY ./kos /home/user/kos
COPY ./planner /home/user/planner
COPY ./tests /home/user/tests

RUN chown -R 1000:1000 /home/user

CMD ["bash"]
```

А если посмотреть конечный образ симулятора, то увидим слои (в обратной последовательности):

```bash
→ docker history simulator
IMAGE          CREATED       CREATED BY                                      SIZE      COMMENT
2ed6960ffbb5   2 weeks ago   CMD ["bash"]                                    0B        buildkit.dockerfile.v0
<missing>      2 weeks ago   RUN /bin/sh -c chown -R 1000:1000 /home/user…   400MB     buildkit.dockerfile.v0
<missing>      2 weeks ago   COPY ./tests /home/user/tests # buildkit        7.54kB    buildkit.dockerfile.v0
<missing>      2 weeks ago   COPY ./planner /home/user/planner # buildkit    55.6MB    buildkit.dockerfile.v0
<missing>      2 weeks ago   COPY ./kos /home/user/kos # buildkit            178kB     buildkit.dockerfile.v0
<missing>      2 weeks ago   COPY ./ardupilot /home/user/ardupilot # buil…   166MB     buildkit.dockerfile.v0
<missing>      2 weeks ago   RUN /bin/sh -c su -c 'pip3 install PyYAML ma…   179MB     buildkit.dockerfile.v0
<missing>      2 weeks ago   RUN /bin/sh -c unzip /tmp/KasperskyOS-Commun…   1.89GB    buildkit.dockerfile.v0
<missing>      2 weeks ago   COPY ./KasperskyOS-Community-Edition-1.2.0.4…   511MB     buildkit.dockerfile.v0
<missing>      2 weeks ago   RUN /bin/sh -c apt-get update &&     apt ins…   1.83GB    buildkit.dockerfile.v0
<missing>      2 weeks ago   ENV PATH=/usr/local/sbin:/usr/local/bin:/usr…   0B        buildkit.dockerfile.v0
<missing>      2 weeks ago   ENV DEBIAN_FRONTEND=noninteractive              0B        buildkit.dockerfile.v0
<missing>      4 weeks ago   /bin/sh -c #(nop)  CMD ["/bin/bash"]            0B        
<missing>      4 weeks ago   /bin/sh -c #(nop) ADD file:a5d32dc2ab15ff0d7…   77.9MB    
<missing>      4 weeks ago   /bin/sh -c #(nop)  LABEL org.opencontainers.…   0B        
<missing>      4 weeks ago   /bin/sh -c #(nop)  LABEL org.opencontainers.…   0B        
<missing>      4 weeks ago   /bin/sh -c #(nop)  ARG LAUNCHPAD_BUILD_ARCH     0B        
<missing>      4 weeks ago   /bin/sh -c #(nop)  ARG RELEASE                  0B        
```

Тут же можно увидеть и размер слоёв.

## Вопрос 5: При запуске `make online` мой код не работает и не выводятся координаты (как в квалификационном задании) значит файл вообще не запускается?

При запуске `make online` полётное задание подтверждается через ОРвД, а значит в коде нужно учитывать получил ли полётный контроллер задание иначе логика может отработать до его получения и ничего не вывести на экран.

## Вопрос 6: Цифровой двойник не запускается `make online` или `make offline`. Ошибки сети?

Если ошибки от docker или docker-compose:

```text
ERROR: Pool overlaps with other one on this address space
```

```text
ERROR: for orvd  Cannot start service orvd: network a8cff278b3a741b9b3ae96395e1f238eb3400f9ec371eb4690c79e9d43421e7d not found
```

и разные вариации.

Можно попробовать очистить запущенные сети `make clean-network`.

Если не помогает, то посмотреть какие сети созданы и удалить лишние (сети с именами bridge, host, none не надо трогать):

```bash
docker network list
```

и

```bash
docker network rm имя_сети
```

## Вопрос 7: docker не может скачать базовый образ и не собирает мои образы. Что делать?

Если ошибка как ниже:

```bash
→ docker run ubuntu:22.04
Unable to find image 'ubuntu:22.04' locally
docker: Error response from daemon: pull access denied for ubuntu, repository does not exist or may require 'docker login': denied: <html><body><h1>403 Forbidden</h1>
Since Docker is a US company, we must comply with US export control regulations. In an effort to comply with these, we now block all IP addresses that are located in Cuba, Iran, North Korea, Republic of Crimea, Sudan, and Syria. If you are not in one of these cities, countries, or regions and are blocked, please reach out to https://hub.docker.com/support/contact/
</body></html>.
See 'docker run --help'.
```

То достаточно использовать зеркала, например так:

```bash
docker run cr.yandex/mirror/ubuntu:22.04
```

В файлах для сборки Dockerfile FROM указывается аналогично.

```bash
FROM cr.yandex/mirror/ubuntu:22.04
```

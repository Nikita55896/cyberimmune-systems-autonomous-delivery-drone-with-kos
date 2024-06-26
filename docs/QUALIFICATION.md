# Квалификация

Квалификация представляет собой выполнение нескольких заданий подтверждающих, что есть необходимые знания технологий, требуемых для соревнований и умений их использовать.

Оглавление:

- [Задания](#задания)
  - [Настройка и запуск цифрового двойника](#настройка-и-запуск-цифрового-двойника)
  - [Вывести отображение координат и высоты местоположения квадрокоптера в данный момент](#вывести-отображение-координат-и-высоты-местоположения-квадрокоптера-в-данный-момент)
  - [Сдать решение](#сдать-решение)
  - [Результаты](#результаты)
- [Обратная связь](#обратная-связь)

## Задания

Задания проверяют, что у команды есть (или приобретены):

- базовые знания операционной системы на базе ядра [Linux](http://heap.altlinux.org/modules/linux_intro/index.html) и умение ей пользоваться
- базовые знания системы контроля версий [Git](https://git-scm.com/book/en/v2) и умение ей пользоваться
- базовые знания и умение пользоваться командной оболочкой и интерпретатором [Bash](https://www.gnu.org/software/bash/manual/bash.html)
- базовые знания C/C++

### Настройка и запуск цифрового двойника

Требуется:

1. ознакомиться с [видео демонстрацией цифрового двойника и имитатора ОрВД](https://youtu.be/ytzJ13hsMwg?t=265).
2. настроить окружение на базе операционной системы Linux (рекомендуется [Ubuntu 22.04](https://releases.ubuntu.com/jammy/))
3. сделать fork (в терминологии Git) main ветки проекта [cyberimmunity-edu/cyberimmune-systems-autonomous-delivery-drone-with-kos](https://github.com/cyberimmunity-edu/cyberimmune-systems-autonomous-delivery-drone-with-kos)
4. запустить цифрового двойника (в режиме offline и online)
5. пролететь виртуальную миссию отслеживая происходящее в планировщике

### Вывести отображение координат и высоты местоположения квадрокоптера в данный момент

Требуется:

1. ознакомиться с [программным интерфейсом](https://github.com/cyberimmunity-edu/cyberimmune-systems-autonomous-delivery-drone-with-kos/blob/main/docs/API.md) бортового модуля безопасности
2. используя вызовы программного интерфейса, отобразить в текстовом выводе координаты и высоту местоположения квадрокоптера в каждый момент (не чаще раза в секунду)
    - подсказка: редактировать понадобится только файл `kos/flight_controller/src/main.cpp`

### Сдать решение

Капитаны команд заполняют форму и указывают в ней ссылку на свой репозиторий (свой fork) с выполненным квалификационным заданием - [форма для заполнения капитаном команды](https://forms.yandex.ru/u/663f73cfe010db5515a7e7b2/).

### Результаты

Результаты публикаются в Telegram канале [Кибериммунная Автономность. Инженерные соревнования. Архипелаг 2024](https://t.me/+KAmdJg7-uAhjYTY0)

## Рабочее окружение

Возможны варианты рабочего окружения:

1. Ubuntu-хост. На компьютере установлена ОС [Ubuntu 22.04](https://releases.ubuntu.com/jammy/) (или любой другой дистрибутив, но работоспособность в них не проверялась) и KasperskyOS Community Edition SDK установлен на хост систему.
2. Docker. На компьютере установлена ОС [Ubuntu 22.04](https://releases.ubuntu.com/jammy/) (или любой другой дистрибутив), [Docker](https://docs.docker.com/get-started/overview/), [Docker Compose](https://docs.docker.com/compose/) и KasperskyOS Community Edition SDK вместе с цифровым двойником запускается в контейнерах docker.
3. VirtualBox. На компьютере установлена любая ОС (Windows/Linux) и установлен [VirtualBox](https://www.virtualbox.org/) (образ настроенной ОС Ubuntu 22.04 предоставляется организаторами в чате) и работа с KasperskyOS Community Edition SDK будет происходить в виртуальной машине.
4. Windows. На компьютере установлена ОС из семейства Windows, [WSL 2](https://learn.microsoft.com/ru-ru/windows/wsl/install) и Ubuntu 22.04 внутри, [Docker Desktop](https://www.docker.com/products/docker-desktop/)

Описанные рабочие окружения тестировались и подойдут для выполнения задания и дальнейшем участие в соревнованиях.

## Обратная связь

По любым возникающим вопросам можете обращаться:

- в наш Telegram чат: [Кибериммунная Автономность. Инженерные соревнования. Архипелаг 2024](https://t.me/+KAmdJg7-uAhjYTY0)
- по электронной почте [cyberimmunity-edu@kaspersky.com](mailto:cyberimmunity-edu@kaspersky.com?subject=[GitHub]%20Qualification%20Questions)
- техническому эксперту Юрию Безносу в Telegram [@yurabeznos](https://t.me/yurabeznos)

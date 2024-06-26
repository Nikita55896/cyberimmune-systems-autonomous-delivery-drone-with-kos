/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/user/cyberimmune-systems-autonomous-delivery-drone-with-kos-contest/modules/DroneCAN/DSDL/dronecan/remoteid/20030.BasicID.uavcan
 */

#ifndef DRONECAN_REMOTEID_BASICID_HPP_INCLUDED
#define DRONECAN_REMOTEID_BASICID_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# DroneCAN version of MAVLink OPEN_DRONE_ID_BASIC_ID
# see MAVLink XML for detailed description
#
uint8[<=20] id_or_mac

uint8 ODID_ID_TYPE_NONE = 0
uint8 ODID_ID_TYPE_SERIAL_NUMBER = 1
uint8 ODID_ID_TYPE_CAA_REGISTRATION_ID = 2
uint8 ODID_ID_TYPE_UTM_ASSIGNED_UUID = 3
uint8 ODID_ID_TYPE_SPECIFIC_SESSION_ID = 4

uint8       id_type

uint8 ODID_UA_TYPE_NONE = 0 # No UA (Unmanned Aircraft) type defined
uint8 ODID_UA_TYPE_AEROPLANE = 1 # Aeroplane/Airplane. Fixed wing
uint8 ODID_UA_TYPE_HELICOPTER_OR_MULTIROTOR = 2 # Helicopter or multirotor
uint8 ODID_UA_TYPE_GYROPLANE = 3 # Gyroplane
uint8 ODID_UA_TYPE_HYBRID_LIFT = 4 # VTOL (Vertical Take-Off and Landing). Fixed wing aircraft that can take off vertically
uint8 ODID_UA_TYPE_ORNITHOPTER = 5 # Ornithopter
uint8 ODID_UA_TYPE_GLIDER = 6 # Glider
uint8 ODID_UA_TYPE_KITE = 7 # Kite
uint8 ODID_UA_TYPE_FREE_BALLOON = 8 # Free Balloon
uint8 ODID_UA_TYPE_CAPTIVE_BALLOON = 9 # Captive Balloon
uint8 ODID_UA_TYPE_AIRSHIP = 10 # Airship. E.g. a blimp
uint8 ODID_UA_TYPE_FREE_FALL_PARACHUTE = 11 # Free Fall/Parachute (unpowered)
uint8 ODID_UA_TYPE_ROCKET = 12 # Rocket
uint8 ODID_UA_TYPE_TETHERED_POWERED_AIRCRAFT = 13 # Tethered powered aircraft
uint8 ODID_UA_TYPE_GROUND_OBSTACLE = 14 # Ground Obstacle
uint8 ODID_UA_TYPE_OTHER = 15 # Other type of aircraft not listed earlier

uint8       ua_type
uint8[<=20] uas_id
******************************************************************************/

/********************* DSDL signature source definition ***********************
dronecan.remoteid.BasicID
saturated uint8[<=20] id_or_mac
saturated uint8 id_type
saturated uint8 ua_type
saturated uint8[<=20] uas_id
******************************************************************************/

#undef id_or_mac
#undef id_type
#undef ua_type
#undef uas_id
#undef ODID_ID_TYPE_NONE
#undef ODID_ID_TYPE_SERIAL_NUMBER
#undef ODID_ID_TYPE_CAA_REGISTRATION_ID
#undef ODID_ID_TYPE_UTM_ASSIGNED_UUID
#undef ODID_ID_TYPE_SPECIFIC_SESSION_ID
#undef ODID_UA_TYPE_NONE
#undef ODID_UA_TYPE_AEROPLANE
#undef ODID_UA_TYPE_HELICOPTER_OR_MULTIROTOR
#undef ODID_UA_TYPE_GYROPLANE
#undef ODID_UA_TYPE_HYBRID_LIFT
#undef ODID_UA_TYPE_ORNITHOPTER
#undef ODID_UA_TYPE_GLIDER
#undef ODID_UA_TYPE_KITE
#undef ODID_UA_TYPE_FREE_BALLOON
#undef ODID_UA_TYPE_CAPTIVE_BALLOON
#undef ODID_UA_TYPE_AIRSHIP
#undef ODID_UA_TYPE_FREE_FALL_PARACHUTE
#undef ODID_UA_TYPE_ROCKET
#undef ODID_UA_TYPE_TETHERED_POWERED_AIRCRAFT
#undef ODID_UA_TYPE_GROUND_OBSTACLE
#undef ODID_UA_TYPE_OTHER

namespace dronecan
{
namespace remoteid
{

template <int _tmpl>
struct UAVCAN_EXPORT BasicID_
{
    typedef const BasicID_<_tmpl>& ParameterType;
    typedef BasicID_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_ID_TYPE_NONE;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_ID_TYPE_SERIAL_NUMBER;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_ID_TYPE_CAA_REGISTRATION_ID;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_ID_TYPE_UTM_ASSIGNED_UUID;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_ID_TYPE_SPECIFIC_SESSION_ID;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_NONE;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_AEROPLANE;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_HELICOPTER_OR_MULTIROTOR;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_GYROPLANE;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_HYBRID_LIFT;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_ORNITHOPTER;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_GLIDER;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_KITE;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_FREE_BALLOON;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_CAPTIVE_BALLOON;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_AIRSHIP;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_FREE_FALL_PARACHUTE;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_ROCKET;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_TETHERED_POWERED_AIRCRAFT;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_GROUND_OBSTACLE;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ODID_UA_TYPE_OTHER;
    };

    struct FieldTypes
    {
        typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 20 > id_or_mac;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > id_type;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ua_type;
        typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 20 > uas_id;
    };

    enum
    {
        MinBitLen
            = FieldTypes::id_or_mac::MinBitLen
            + FieldTypes::id_type::MinBitLen
            + FieldTypes::ua_type::MinBitLen
            + FieldTypes::uas_id::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::id_or_mac::MaxBitLen
            + FieldTypes::id_type::MaxBitLen
            + FieldTypes::ua_type::MaxBitLen
            + FieldTypes::uas_id::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_ID_TYPE_NONE >::Type ODID_ID_TYPE_NONE; // 0
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_ID_TYPE_SERIAL_NUMBER >::Type ODID_ID_TYPE_SERIAL_NUMBER; // 1
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_ID_TYPE_CAA_REGISTRATION_ID >::Type ODID_ID_TYPE_CAA_REGISTRATION_ID; // 2
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_ID_TYPE_UTM_ASSIGNED_UUID >::Type ODID_ID_TYPE_UTM_ASSIGNED_UUID; // 3
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_ID_TYPE_SPECIFIC_SESSION_ID >::Type ODID_ID_TYPE_SPECIFIC_SESSION_ID; // 4
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_NONE >::Type ODID_UA_TYPE_NONE; // 0
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_AEROPLANE >::Type ODID_UA_TYPE_AEROPLANE; // 1
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_HELICOPTER_OR_MULTIROTOR >::Type ODID_UA_TYPE_HELICOPTER_OR_MULTIROTOR; // 2
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_GYROPLANE >::Type ODID_UA_TYPE_GYROPLANE; // 3
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_HYBRID_LIFT >::Type ODID_UA_TYPE_HYBRID_LIFT; // 4
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_ORNITHOPTER >::Type ODID_UA_TYPE_ORNITHOPTER; // 5
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_GLIDER >::Type ODID_UA_TYPE_GLIDER; // 6
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_KITE >::Type ODID_UA_TYPE_KITE; // 7
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_FREE_BALLOON >::Type ODID_UA_TYPE_FREE_BALLOON; // 8
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_CAPTIVE_BALLOON >::Type ODID_UA_TYPE_CAPTIVE_BALLOON; // 9
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_AIRSHIP >::Type ODID_UA_TYPE_AIRSHIP; // 10
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_FREE_FALL_PARACHUTE >::Type ODID_UA_TYPE_FREE_FALL_PARACHUTE; // 11
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_ROCKET >::Type ODID_UA_TYPE_ROCKET; // 12
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_TETHERED_POWERED_AIRCRAFT >::Type ODID_UA_TYPE_TETHERED_POWERED_AIRCRAFT; // 13
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_GROUND_OBSTACLE >::Type ODID_UA_TYPE_GROUND_OBSTACLE; // 14
    static const typename ::uavcan::StorageType< typename ConstantTypes::ODID_UA_TYPE_OTHER >::Type ODID_UA_TYPE_OTHER; // 15

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::id_or_mac >::Type id_or_mac;
    typename ::uavcan::StorageType< typename FieldTypes::id_type >::Type id_type;
    typename ::uavcan::StorageType< typename FieldTypes::ua_type >::Type ua_type;
    typename ::uavcan::StorageType< typename FieldTypes::uas_id >::Type uas_id;

    BasicID_()
        : id_or_mac()
        , id_type()
        , ua_type()
        , uas_id()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<346 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 20030 };

    static const char* getDataTypeFullName()
    {
        return "dronecan.remoteid.BasicID";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool BasicID_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        id_or_mac == rhs.id_or_mac &&
        id_type == rhs.id_type &&
        ua_type == rhs.ua_type &&
        uas_id == rhs.uas_id;
}

template <int _tmpl>
bool BasicID_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(id_or_mac, rhs.id_or_mac) &&
        ::uavcan::areClose(id_type, rhs.id_type) &&
        ::uavcan::areClose(ua_type, rhs.ua_type) &&
        ::uavcan::areClose(uas_id, rhs.uas_id);
}

template <int _tmpl>
int BasicID_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::id_or_mac::encode(self.id_or_mac, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::id_type::encode(self.id_type, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::ua_type::encode(self.ua_type, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::uas_id::encode(self.uas_id, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int BasicID_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::id_or_mac::decode(self.id_or_mac, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::id_type::decode(self.id_type, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::ua_type::decode(self.ua_type, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::uas_id::decode(self.uas_id, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature BasicID_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x5B1C624A8E4FC533ULL);

    FieldTypes::id_or_mac::extendDataTypeSignature(signature);
    FieldTypes::id_type::extendDataTypeSignature(signature);
    FieldTypes::ua_type::extendDataTypeSignature(signature);
    FieldTypes::uas_id::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_ID_TYPE_NONE >::Type
    BasicID_<_tmpl>::ODID_ID_TYPE_NONE = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_ID_TYPE_SERIAL_NUMBER >::Type
    BasicID_<_tmpl>::ODID_ID_TYPE_SERIAL_NUMBER = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_ID_TYPE_CAA_REGISTRATION_ID >::Type
    BasicID_<_tmpl>::ODID_ID_TYPE_CAA_REGISTRATION_ID = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_ID_TYPE_UTM_ASSIGNED_UUID >::Type
    BasicID_<_tmpl>::ODID_ID_TYPE_UTM_ASSIGNED_UUID = 3U; // 3

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_ID_TYPE_SPECIFIC_SESSION_ID >::Type
    BasicID_<_tmpl>::ODID_ID_TYPE_SPECIFIC_SESSION_ID = 4U; // 4

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_NONE >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_NONE = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_AEROPLANE >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_AEROPLANE = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_HELICOPTER_OR_MULTIROTOR >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_HELICOPTER_OR_MULTIROTOR = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_GYROPLANE >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_GYROPLANE = 3U; // 3

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_HYBRID_LIFT >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_HYBRID_LIFT = 4U; // 4

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_ORNITHOPTER >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_ORNITHOPTER = 5U; // 5

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_GLIDER >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_GLIDER = 6U; // 6

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_KITE >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_KITE = 7U; // 7

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_FREE_BALLOON >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_FREE_BALLOON = 8U; // 8

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_CAPTIVE_BALLOON >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_CAPTIVE_BALLOON = 9U; // 9

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_AIRSHIP >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_AIRSHIP = 10U; // 10

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_FREE_FALL_PARACHUTE >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_FREE_FALL_PARACHUTE = 11U; // 11

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_ROCKET >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_ROCKET = 12U; // 12

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_TETHERED_POWERED_AIRCRAFT >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_TETHERED_POWERED_AIRCRAFT = 13U; // 13

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_GROUND_OBSTACLE >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_GROUND_OBSTACLE = 14U; // 14

template <int _tmpl>
const typename ::uavcan::StorageType< typename BasicID_<_tmpl>::ConstantTypes::ODID_UA_TYPE_OTHER >::Type
    BasicID_<_tmpl>::ODID_UA_TYPE_OTHER = 15U; // 15

/*
 * Final typedef
 */
typedef BasicID_<0> BasicID;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::dronecan::remoteid::BasicID > _uavcan_gdtr_registrator_BasicID;

}

} // Namespace remoteid
} // Namespace dronecan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::dronecan::remoteid::BasicID >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::dronecan::remoteid::BasicID::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::dronecan::remoteid::BasicID >::stream(Stream& s, ::dronecan::remoteid::BasicID::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "id_or_mac: ";
    YamlStreamer< ::dronecan::remoteid::BasicID::FieldTypes::id_or_mac >::stream(s, obj.id_or_mac, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "id_type: ";
    YamlStreamer< ::dronecan::remoteid::BasicID::FieldTypes::id_type >::stream(s, obj.id_type, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "ua_type: ";
    YamlStreamer< ::dronecan::remoteid::BasicID::FieldTypes::ua_type >::stream(s, obj.ua_type, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "uas_id: ";
    YamlStreamer< ::dronecan::remoteid::BasicID::FieldTypes::uas_id >::stream(s, obj.uas_id, level + 1);
}

}

namespace dronecan
{
namespace remoteid
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::dronecan::remoteid::BasicID::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::dronecan::remoteid::BasicID >::stream(s, obj, 0);
    return s;
}

} // Namespace remoteid
} // Namespace dronecan

#endif // DRONECAN_REMOTEID_BASICID_HPP_INCLUDED
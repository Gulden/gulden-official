// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#import "DBAddressRecord.h"
#include "address_record.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class DBAddressRecord;

namespace djinni_generated {

struct AddressRecord
{
    using CppType = ::AddressRecord;
    using ObjcType = DBAddressRecord*;

    using Boxed = AddressRecord;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
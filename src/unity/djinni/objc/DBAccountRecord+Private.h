// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#import "DBAccountRecord.h"
#include "account_record.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class DBAccountRecord;

namespace djinni_generated {

struct AccountRecord
{
    using CppType = ::AccountRecord;
    using ObjcType = DBAccountRecord*;

    using Boxed = AccountRecord;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
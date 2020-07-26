// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#import "DBIRpcController+Private.h"
#import "DBIRpcController.h"
#import "DBIRpcListener+Private.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface DBIRpcController ()

- (id)initWithCpp:(const std::shared_ptr<::IRpcController>&)cppRef;

@end

@implementation DBIRpcController {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::IRpcController>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::IRpcController>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (void)execute:(nonnull NSString *)rpcCommandLine
 resultListener:(nullable id<DBIRpcListener>)resultListener {
    try {
        ::IRpcController::execute(::djinni::String::toCpp(rpcCommandLine),
                                  ::djinni_generated::IRpcListener::toCpp(resultListener));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull NSArray<NSString *> *)getAutocompleteList {
    try {
        auto objcpp_result_ = ::IRpcController::getAutocompleteList();
        return ::djinni::List<::djinni::String>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto IRpcController::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto IRpcController::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<DBIRpcController>(cpp);
}

}  // namespace djinni_generated

@end
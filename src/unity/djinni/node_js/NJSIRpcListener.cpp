// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#include "NJSIRpcListener.hpp"
using namespace std;

void NJSIRpcListener::onSuccess(const std::string & filteredCommand, const std::string & result)
{
    const auto& env = Env();
    Napi::HandleScope scope(env);
    //Wrap parameters
    std::vector<napi_value> args;
    auto arg_0 = Napi::String::New(env, filteredCommand);
    args.push_back(arg_0);
    auto arg_1 = Napi::String::New(env, result);
    args.push_back(arg_1);
    Napi::Function calling_function = Value().Get("onSuccess").As<Napi::Function>();
    auto result_onSuccess = calling_function.Call(args);
    if(result_onSuccess.IsEmpty())
    {
        Napi::Error::New(env, "NJSIRpcListener::onSuccess call failed").ThrowAsJavaScriptException();
        return;
    }
}

void NJSIRpcListener::onError(const std::string & errorMessage)
{
    const auto& env = Env();
    Napi::HandleScope scope(env);
    //Wrap parameters
    std::vector<napi_value> args;
    auto arg_0 = Napi::String::New(env, errorMessage);
    args.push_back(arg_0);
    Napi::Function calling_function = Value().Get("onError").As<Napi::Function>();
    auto result_onError = calling_function.Call(args);
    if(result_onError.IsEmpty())
    {
        Napi::Error::New(env, "NJSIRpcListener::onError call failed").ThrowAsJavaScriptException();
        return;
    }
}

Napi::FunctionReference NJSIRpcListener::constructor;

Napi::Object NJSIRpcListener::Init(Napi::Env env, Napi::Object exports) {

    Napi::Function func = DefineClass(env, "NJSIRpcListener",{});
    constructor = Napi::Persistent(func);
    constructor.SuppressDestruct();
    exports.Set("NJSIRpcListener", func);
    return exports;
}

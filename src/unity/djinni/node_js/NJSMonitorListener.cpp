// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#include "NJSMonitorListener.hpp"
using namespace std;

void NJSMonitorListener::onPartialChain(int32_t height, int32_t probable_height, int32_t offset)
{
    const auto& env = Env();
    Napi::HandleScope scope(env);
    //Wrap parameters
    std::vector<napi_value> args;
    auto arg_0 = Napi::Value::From(env, height);
    args.push_back(arg_0);
    auto arg_1 = Napi::Value::From(env, probable_height);
    args.push_back(arg_1);
    auto arg_2 = Napi::Value::From(env, offset);
    args.push_back(arg_2);
    Napi::Value calling_function_as_value = Value().Get("onPartialChain");
    if(!calling_function_as_value.IsUndefined() && !calling_function_as_value.IsNull())
    {
        Napi::Function calling_function = calling_function_as_value.As<Napi::Function>();
        auto result_onPartialChain = calling_function.Call(args);
        if(result_onPartialChain.IsEmpty())
        {
            Napi::Error::New(env, "NJSMonitorListener::onPartialChain call failed").ThrowAsJavaScriptException();
            return;
        }
    }
}

void NJSMonitorListener::onPruned(int32_t height)
{
    const auto& env = Env();
    Napi::HandleScope scope(env);
    //Wrap parameters
    std::vector<napi_value> args;
    auto arg_0 = Napi::Value::From(env, height);
    args.push_back(arg_0);
    Napi::Value calling_function_as_value = Value().Get("onPruned");
    if(!calling_function_as_value.IsUndefined() && !calling_function_as_value.IsNull())
    {
        Napi::Function calling_function = calling_function_as_value.As<Napi::Function>();
        auto result_onPruned = calling_function.Call(args);
        if(result_onPruned.IsEmpty())
        {
            Napi::Error::New(env, "NJSMonitorListener::onPruned call failed").ThrowAsJavaScriptException();
            return;
        }
    }
}

void NJSMonitorListener::onProcessedSPVBlocks(int32_t height)
{
    const auto& env = Env();
    Napi::HandleScope scope(env);
    //Wrap parameters
    std::vector<napi_value> args;
    auto arg_0 = Napi::Value::From(env, height);
    args.push_back(arg_0);
    Napi::Value calling_function_as_value = Value().Get("onProcessedSPVBlocks");
    if(!calling_function_as_value.IsUndefined() && !calling_function_as_value.IsNull())
    {
        Napi::Function calling_function = calling_function_as_value.As<Napi::Function>();
        auto result_onProcessedSPVBlocks = calling_function.Call(args);
        if(result_onProcessedSPVBlocks.IsEmpty())
        {
            Napi::Error::New(env, "NJSMonitorListener::onProcessedSPVBlocks call failed").ThrowAsJavaScriptException();
            return;
        }
    }
}

Napi::FunctionReference NJSMonitorListener::constructor;

Napi::Object NJSMonitorListener::Init(Napi::Env env, Napi::Object exports) {

    Napi::Function func = DefineClass(env, "NJSMonitorListener",{});
    constructor = Napi::Persistent(func);
    constructor.SuppressDestruct();
    exports.Set("NJSMonitorListener", func);
    return exports;
}

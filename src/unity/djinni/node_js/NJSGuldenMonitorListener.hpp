// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#ifndef DJINNI_GENERATED_NJSGULDENMONITORLISTENER_HPP
#define DJINNI_GENERATED_NJSGULDENMONITORLISTENER_HPP


#include <cstdint>

#include <nan.h>
#include <node.h>
#include <gulden_monitor_listener.hpp>

using namespace v8;
using namespace node;
using namespace std;

class NJSGuldenMonitorListener: public ::GuldenMonitorListener {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<::GuldenMonitorListener> &object);
    static Nan::Persistent<ObjectTemplate> GuldenMonitorListener_prototype;
    ~NJSGuldenMonitorListener()
    {
        njs_impl.Reset();
    };
    NJSGuldenMonitorListener(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    void onPartialChain(int32_t height, int32_t probable_height, int32_t offset);

    void onPruned(int32_t height);

    void onProcessedSPVBlocks(int32_t height);

private:
    static NAN_METHOD(onPartialChain);

    static NAN_METHOD(onPruned);

    static NAN_METHOD(onProcessedSPVBlocks);

    static NAN_METHOD(New);

    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSGULDENMONITORLISTENER_HPP

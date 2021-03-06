// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#pragma once

#include <string>
#include <utility>

struct InputRecord final {
    std::string address;
    std::string label;
    std::string desc;
    bool isMine;

    InputRecord(std::string address_,
                std::string label_,
                std::string desc_,
                bool isMine_)
    : address(std::move(address_))
    , label(std::move(label_))
    , desc(std::move(desc_))
    , isMine(std::move(isMine_))
    {}
};

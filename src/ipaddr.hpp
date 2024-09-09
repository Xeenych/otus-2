#pragma once

#include <array>
#include <cstdint>
#include <iostream>
#include <string_view>

class ipaddr_t : public std::array<uint8_t, 4> {
   public:
    ipaddr_t() = default;

    bool parse(std::string_view s) { return true; }
};

std::ostream& operator<<(std::ostream& s, const ipaddr_t& a) {
    s << a[0] << "." << a[1] << "." << a[2] << "." << a[3];
    return s;
}

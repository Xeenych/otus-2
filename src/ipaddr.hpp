#pragma once

#include <array>
#include <cstdint>
#include <iostream>
#include <sstream>

class ipaddr_t : public std::array<uint8_t, 4> {
   public:
    ipaddr_t(const std::string& s) {
        std::istringstream ss{s};

        for (auto& d : *this) {
            char unused;
            unsigned int v = 0;
            ss >> v >> unused;
            d = v;
        }
    }
};

std::ostream& operator<<(std::ostream& s, const ipaddr_t& a) {
    return s << +a[0] << "." << +a[1] << "." << +a[2] << "." << +a[3];
}

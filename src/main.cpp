#include "ipaddr.hpp"

#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char const* argv[]) {
    std::vector<ipaddr_t> ip_pool{};

    for (std::string line; std::getline(std::cin, line);) {
        ip_pool.push_back({line});
    }

    std::sort(ip_pool.rbegin(), ip_pool.rend());

    for (const auto& ip : ip_pool) {
        std::cout << ip << std::endl;
    }

    return 0;
}

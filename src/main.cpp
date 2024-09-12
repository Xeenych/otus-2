#include "ipaddr.hpp"

#include <algorithm>
#include <iostream>
#include <vector>

std::ostream& operator<<(std::ostream& s, const std::vector<ipaddr_t>& v) {
    for (const auto& ip : v) {
        s << ip << std::endl;
    }
    return s;
}

int main(int argc, char const* argv[]) {
    std::vector<ipaddr_t> ip_pool{};

    for (std::string line; std::getline(std::cin, line);) {
        ip_pool.push_back({line});
    }

    // сортировка в обратном порядке
    std::sort(ip_pool.rbegin(), ip_pool.rend());

    std::cout << ip_pool;

    return 0;
}

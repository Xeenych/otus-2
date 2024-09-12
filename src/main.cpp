#include "ipaddr.hpp"

#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>

template <std::ranges::range Range>
std::ostream& operator<<(std::ostream& s, Range v) {
    std::ranges::for_each(v, [&](auto n) { s << n << std::endl; });
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

    auto view_1 = ip_pool | std::views::filter([](ipaddr_t a) { return 1 == a[0]; });
    std::cout << view_1;

    auto view_2 = ip_pool | std::views::filter([](ipaddr_t a) { return (46 == a[0]) && (70 == a[1]); });
    std::cout << view_2;

    auto view_3 = ip_pool | std::views::filter([](ipaddr_t a) {
                      return (std::any_of(a.begin(), a.end(), [](auto e) { return 46 == e; }));
                  });
    std::cout << view_3;
    return 0;
}

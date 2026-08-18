#include <cinttypes>
#include <string>
#include <algorithm>

uint64_t descendingOrder(uint64_t a)
{
    std::string s = std::to_string(a);
    std::sort(s.begin(), s.end(), std::greater<char>());
    return std::stoull(s);
}
#include <cstdint>
#include <string>
#include <algorithm>

std::string add_binary(uint64_t a, uint64_t b) {
    uint64_t sum = a + b;
    if (sum == 0) return "0";

    std::string result = "";
    while (sum > 0) {
        result += (sum % 2 == 0) ? '0' : '1';
        sum /= 2;
    }
    std::reverse(result.begin(), result.end());
    return result;
}
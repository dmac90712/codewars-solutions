#include <string>
#include <algorithm>
#include <cctype>

bool isOpposite(const std::string& s1, const std::string& s2) {
    if (s1.empty() && s2.empty()) return false;
    if (s1.size() != s2.size()) return false;
    for (size_t i = 0; i < s1.size(); ++i) {
        if (std::tolower(s1[i]) != std::tolower(s2[i])) return false;
        if (std::isupper(s1[i]) == std::isupper(s2[i])) return false;
    }
    return true;
}
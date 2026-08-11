#include <string>

std::string solution(std::string a, std::string b)
{
    return a.length() < b.length() ? a + b + a : b + a + b;
}
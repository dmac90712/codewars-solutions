#include <string>
#include <algorithm>

std::string reverse_words(std::string str)
{
    auto start = str.begin();
    
    for (auto it = str.begin(); it <= str.end(); ++it) {
        if (it == str.end() || *it == ' ') {
            std::reverse(start, it);
            start = it + 1;
        }
    }
    
    return str;
}
#include <string>

std::string fakeBin(std::string str) {
    for (char &c : str) {
        c = (c < '5') ? '0' : '1';
    }
    return str;
}
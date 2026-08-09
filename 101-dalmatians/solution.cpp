#include <vector>
#include <string>

std::string howManyDalmatians(int number) {
    std::vector<std::string> dogs = {
        "Hardly any",
        "More than a handful!",
        "Woah that's a lot of dogs!",
        "101 DALMATIANS!"
    };
    return number == 101 ? dogs[3]
         : number < 10   ? dogs[0]
         : number <= 50  ? dogs[1]
         : dogs[2];
}
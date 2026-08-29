#include <cmath>

long int findNextSquare(long int sq) {
    long int root = std::sqrt(sq);
    if (root * root == sq) {
        return (root + 1) * (root + 1);
    }
    return -1;
}
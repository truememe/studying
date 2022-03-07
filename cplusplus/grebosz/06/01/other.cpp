#include <iostream>

inline int bigger(int a, int b) {
    return a > b ? a : b;
}

void second() {
    std::cout << bigger(20,40) << std::endl;
}
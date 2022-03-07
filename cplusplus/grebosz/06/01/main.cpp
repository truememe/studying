#include <iostream>
#include "bib.h"
extern void second();

// inline int bigger(int x, int y) {
//     return x > y ? x : y;
// }


int main() {
    std::cout << bigger(5,6) << std::endl;
    second();
}
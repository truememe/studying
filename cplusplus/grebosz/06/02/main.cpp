#include <iostream>

void f() {
    static int counter;
    if (counter % 12 == 0) 
    {
        std::cout << "new 12th "<< counter << std::endl;
    }
    ++counter;
}

int sum(int count) {
    int sum;
    for(int i=0; i<count; ++i) sum +=i;
    return sum;
}

int main() {
    for (int i=0; i<100; ++i) f();
    sum(4);
}
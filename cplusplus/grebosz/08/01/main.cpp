#include <iostream>

enum class movement {
    forward,
    backward,
    stop
};

int main() {
    movement tabl[15] = { 
        movement::forward,
        movement::backward,
        movement::backward,
        movement::stop,
        movement::forward
    };

    char tab[14] = {"programming"};
    char tab2[] = {'x', 'y', 'z'};
}
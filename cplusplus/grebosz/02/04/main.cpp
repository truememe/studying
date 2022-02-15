#include <iostream>
using namespace std;

int main() {
    cout << "How many passangers do we have?: ";
    int value;
    cin >> value;

    int i;
    for(i=1; i<= value; i++) {
        cout << "Seat your belts " << i << "!\n";
    }
    cout << "Landing...";
}
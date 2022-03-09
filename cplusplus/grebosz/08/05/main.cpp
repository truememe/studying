#include <iostream>

using namespace std;

int results[16] { 246, 366, 231, 123, 545, 867, 423, 76, 87, 82, 75, 98745, 9845, 34, 98, 556};


int main() {
    cout << "Combinations: " << endl;
    for (int i = 0; i < 16; i++) {
        if (((i >> 3) % 2) != 0 ) cout << " FRS";
        if (((i >> 2) % 2) != 0 ) cout << " GER";
        if (((i >> 1) % 2) != 0 ) cout << " HEC";
        if (( i % 2 ) != 0 ) cout << " DGF";
        cout << " -> " << results[i] << endl;
    }

}
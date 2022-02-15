#include <iostream>
using namespace std;

int main() {
    int foots;
    double meters;
    double ratio = 0.3;

    cout << "Enter the height in foots: ";
    cin >> foots;

    meters = foots * ratio;

    cout << "\n";
    cout << foots << " foots is: " << meters << " meters\n";
}
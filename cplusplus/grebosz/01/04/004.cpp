#include <iostream>
using namespace std;

int main() {
    double cals;
    double cms;
    double ratio = 2.54;

    cout << "Insert cals: ";
    cin >> cals;

    cms = cals * ratio;

    cout << "\n";
    cout << cals << " cals is: " << cms << " centimeters";
}
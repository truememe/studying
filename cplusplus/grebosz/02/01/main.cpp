#include <iostream>
using namespace std;

int main() {
    int wys, punkty_karne;
    cout << "Na jakiej wysokości lecimy ? [w metrach]";
    cin >> wys;

    if(wys < 500) {
        cout << "\n" << wys << " metrow za nisko !\n";
        punkty_karne = 1;
    } else {
        cout << "\nNa wysokości " << wys << " metrów jesteś już bezpieczny!\n";
        punkty_karne = 0;
    }
    cout << "Masz " << punkty_karne << " punktów karnych \n";
    if(punkty_karne) cout << "Popraw się!";
}
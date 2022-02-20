#include <iostream>
using namespace std;

int main() {
    char znak {'A'};
    string regula;

    for (int i=0; i<100; i++) {
        if(znak > 'Z') break;
        if(znak == 'H') {
            cin >> regula; 
        }
        cout << regula << znak << endl;
        znak += 1;
    }

}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> ww{9,4,7,-6,2,7};
    cout << "ww[1]=" << ww[1] << endl;

    int rozmiar = ww.size();
    cout << "Wektor ww ma elementów " << rozmiar << endl;

    for(int i=0; i<ww.size(); i++) {
        cout << ww[i] << ", ";
    }
    cout << endl;

    int b = ww[4] + 500;
    ww[2] = ww[3] * 10;
    cout << "b = " << b << " ww[2] = " << ww[2] << endl;
    cout << "wektor teraz: " << endl;
    for(int nr = 0; nr < ww.size(); ++nr) {
        cout << "ww[" << nr << "] = " << ww[nr];
        if(ww[nr] == 2) {
            cout << " dwa!";
        }
        cout << endl;
    }

    vector<int> m;
    vector<char> symbole(10);
    vector<char> litery(12, '.');

    cout << "Tresc litery: " << endl;
    for (int i = 0; i < litery.size(); ++i) cout << litery[i];
    cout << endl;

    litery[0] = 'M';
    litery[6] = 'B';
    litery[10] = 'X';
    for (int i = 0; i < litery.size(); ++i) cout << litery[i];
    cout << endl;

    vector<string> fizycy {"Galilei", "Newton", "Einstein"};
    vector<string> muzycy;
    muzycy.push_back("Chopin");
    muzycy.push_back("Lutoslawski");
    muzycy.push_back("Debussy");
    
    for (auto element : muzycy) {
        cout << element << endl;
    }
}
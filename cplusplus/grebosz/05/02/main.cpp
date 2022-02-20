#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main() {
    vector<int> var {30, 40, 50};
    vector<string> surnames {"X}", "Y}"};

    surnames[0] = "XYZ";
    surnames.push_back("hehehe");

    for(auto surname : surnames) {
        cout << surname << " - hehe" << endl;
    }

    for (int i = 0; i < surnames.size(); ++i) {
        cout << surnames[i] << endl;
    }
}
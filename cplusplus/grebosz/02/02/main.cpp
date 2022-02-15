#include <iostream>
using namespace std;

int main() {
    int howMany;
    cout << "How many stars the captains has? :";
    cin >> howMany;
    cout << "\nLet's draw them all : " << howMany << " : ";

    while(howMany) {
        cout << "*";
        howMany -= 1;
    }

    cout << "\nValue of howMany: " << howMany;
}
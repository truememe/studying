#include <iostream>
using namespace std;

int main() {
    char character;
    do {
        cout << "Write a char: ";
        cin >> character;
        cout << "\nYou typed: " << character << "\n";
    }while(character != 'K');

    cout << "Got K so terminating!"; 
}
#include <iostream>

using namespace std;

char first[15] {"first"};
char second[] {" anoth"};

void append(char dst[], int dstLength, char src[]) {
    for(int i = 0, j = 0; i < dstLength; i++) 
    {
        if(dst[i] != 0) continue;
        
        dst[i] = src[j++];
    }
}

int main() {
    cout << "first: " << first << endl;
    cout << "second: " << second << endl;
    append(first, 15, second);
    cout << "first2: " << first << endl;
}
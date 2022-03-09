#include <iostream>

using namespace std;

char first[100] {"institute"};
char second[100] {};

void copy(char dst[], char src[])
{
    for (int nr = 0, where = 0;; ++nr)
    {
        if(src[nr] == 0)
        {
            dst[where] = 0;
            break;
        }

        if((nr%2) == 0)
        {
            dst[where++] = src[nr];
        }
    }
}

int main()
{
    copy(second, first);
    cout << first << endl;
    cout << second << endl;
}
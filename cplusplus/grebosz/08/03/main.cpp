#include <iostream>

using namespace std;

char initial[100] {"this text is quite long and contains many words"};
char even[100] {};
char odd[100] {};


void splitter(char dst_even[], char dst_odd[], char src[]) {
    int word_nr = 0;
    int idx_even = 0;
    int idx_odd = 0;

    for ( int nr = 0 ;; ++nr)
    {
        if(src[nr] == 0)
        {
            dst_even[idx_even] = 0;
            dst_odd[idx_odd] = 0;
            break;
        }

        if(src[nr] == ' ') ++word_nr;

        if((word_nr % 2) == 0)
        {
            dst_even[idx_even++] = src[nr];
        }
        else
        {
            dst_odd[idx_odd++] = src[nr];
        }
    }
}

int main() 
{
    splitter(even, odd, initial);

    cout << "initial: " << initial << endl;
    cout << "even: " << even << endl;
    cout << "odd: " << odd << endl;
}
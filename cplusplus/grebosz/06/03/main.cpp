#include <iostream>
using namespace std;
#include "lib.h"

int m = 55;
double n = 66.66;
char o = 'o';

extern void fun_helper_A();
extern void fun_helper_B();

void fun_main_B();

int main() {
    cout << "MAIN" << endl;
    cout << "m = " << m << ", n = " << n << ", o = " << o << endl
    << "a = " << a << ", b = " << b << ", c = " << c << endl;

    ++m;
    ++n;
    ++o;
    ++a;
    ++b;
    ++c;

    cout << "Changes main: " << endl;
    cout << "m = " << m << ", n = " << n << ", o = " << o << endl
    << "a = " << a << ", b = " << b << ", c = " << c << endl;

    fun_helper_A();
}

void fun_main_B()
{
    cout << "fun_main_B" << endl;
    cout << "m = " << m << ", n = " << n << ", o = " << o << endl
    << "a = " << a << ", b = " << b << ", c = " << c << endl;

    ++m;
    ++n;
    ++o;
    ++a;
    ++b;
    ++c;

    cout << "Changes fun_main_B: " << endl;
    cout << "m = " << m << ", n = " << n << ", o = " << o << endl
    << "a = " << a << ", b = " << b << ", c = " << c << endl;

    fun_helper_B();
}

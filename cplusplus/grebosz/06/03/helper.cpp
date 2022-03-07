#include <iostream>
using namespace std;
#include "lib.h"

int a = 4;
double b = 4.2;
char c = 'c';

extern void fun_main_B();

void fun_helper_A();
void fun_helper_B();

void fun_helper_A()
{
    cout << "Fun_helper_A" << endl;
    cout << "m = " << m << ", n = " << n << ", o = " << o << endl
    << "a = " << a << ", b = " << b << ", c = " << c << endl;

    ++m;
    ++n;
    ++o;
    ++a;
    ++b;
    ++c;

    cout << "Changes fun_helper_A: " << endl;
    cout << "m = " << m << ", n = " << n << ", o = " << o << endl
    << "a = " << a << ", b = " << b << ", c = " << c << endl;

    fun_main_B();
}

void fun_helper_B()
{
    cout << "Fun_helper_B" << endl;
    cout << "m = " << m << ", n = " << n << ", o = " << o << endl
    << "a = " << a << ", b = " << b << ", c = " << c << endl;

    ++m;
    ++n;
    ++o;
    ++a;
    ++b;
    ++c;

    cout << "Changes fun_helper_B: " << endl;
    cout << "m = " << m << ", n = " << n << ", o = " << o << endl
    << "a = " << a << ", b = " << b << ", c = " << c << endl;
}
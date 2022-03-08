#include <iostream>

#define MACRO(x) cout << "Line " << __LINE__ << ", Value \"" << #x "\" = " << x << endl;
#define WHEREIAM cout << __func__ << " " << __LINE__ << endl;

#define DECEMBER_2017 1
#define AUGUST_2015 2

#define EXPERIMENT_VERSION DECEMBER_2017

#if EXPERIMENT_VERSION == 1
    #define TURBO_TYPE 3000
#elif EXPERIMENT_VERSION == 2
    #define TURBO_TYPE 2050
#else
    #error "incorrect experiment version"
#endif

using namespace std;

int main() {
    int x = 33;
    MACRO(x);
    WHEREIAM;
}
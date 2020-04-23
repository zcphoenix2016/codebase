#include "functions.h"
#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;

int main() {
    cout << "--------swap() begin--------" << endl;
    int a = 10, b = 20;
    cout << "a = " << a << ", b = " << b << endl;

    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    cout << "--------swap() end--------" << endl << endl;

    cout << "--------sum() begin--------" << endl;
    cout << "sum(1, 2, 3) = " << sum(3, 1, 2, 3) << endl;
    cout << "sum(1, 2, 3, 4) = " << sum(4, 1, 2, 3, 4) << endl;
    cout << "--------sum() end--------" << endl << endl;

    srand((unsigned int)time(0));
    cout << "random number: " << rand() << endl;
}

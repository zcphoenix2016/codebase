#include "functions.h"
#include <iostream>

int main() {
    int a = 10, b = 20;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
}

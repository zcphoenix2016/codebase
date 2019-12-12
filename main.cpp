#include "functions.h"
#include <iostream>

int main() {
    std::cout << "--------swap() begin--------" << std::endl;
    int a = 10, b = 20;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "--------swap() end--------" << std::endl << std::endl;

    std::cout << "--------sum() begin--------" << std::endl;
    std::cout << "sum(1, 2, 3) = " << sum(3, 1, 2, 3) << std::endl;
    std::cout << "sum(1, 2, 3, 4) = " << sum(4, 1, 2, 3, 4) << std::endl;
    std::cout << "--------sum() end--------" << std::endl << std::endl;
}

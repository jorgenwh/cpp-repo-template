#include <iostream>
#include "arithmetic/arithmetic.h"

int main() 
{
    int a = 10;
    int b = 5;

    std::cout << "a + b = " << arithmetic::add(a, b) << std::endl;
    std::cout << "a - b = " << arithmetic::subtract(a, b) << std::endl;
    std::cout << "a * b = " << arithmetic::multiply(a, b) << std::endl;
    std::cout << "a / b = " << arithmetic::divide(a, b) << std::endl;

    return 0;
}

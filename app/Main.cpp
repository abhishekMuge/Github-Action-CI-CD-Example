#include <iostream>
#include "mylib.h"

int main() {
    mylib::Calculator calc;

    int sum = calc.add(10, 5);
    int diff = calc.subtract(10, 5);

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;

    mylib::print_message();

    return 0;
}
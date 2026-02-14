#include "mylib.h"
#include <iostream>

namespace mylib {

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

void print_message() {
    std::cout << "Hello from MyLib shared library!" << std::endl;
}

}
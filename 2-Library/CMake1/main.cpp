#include <iostream>
#include "math.h"

int main() {
    int result_addition = Math::addition(4, 2);
    int result_subtraction = Math::subtraction(4, 2);

    std::cout << "Addition Result: " << result_addition << std::endl;
    std::cout << "Subtraction Result: " << result_subtraction << std::endl;

    return 0;
}

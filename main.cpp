/**
 * @file main.cpp
 * @brief A simple C++ program demonstrating GitHub versioning with Doxygen.
 *
 * This program contains a basic function to add two numbers.
 */

#include <iostream>

/**
 * @brief Adds two integers.
 * @param a First integer
 * @param b Second integer
 * @return Sum of a and b
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Main function of the program.
 * @return 0 on success
 */
int main() {
    int x = 5, y = 10;
    std::cout << "Sum: " << add(x, y) << std::endl;
    return 0;
}

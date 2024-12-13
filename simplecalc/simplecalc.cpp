#include <iostream>
#include "Calculator.h"

int main() {
    Calculator calc;
    double num1, num2;
    char operation;

    std::cout << "Simple Calculator\n";
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    try {
        double result;
        switch (operation) {
        case '+':
            result = calc.add(num1, num2);
            break;
        case '-':
            result = calc.subtract(num1, num2);
            break;
        case '*':
            result = calc.multiply(num1, num2);
            break;
        case '/':
            result = calc.divide(num1, num2);
            break;
        default:
            std::cerr << "Invalid operation.\n";
            return 1;
        }
        std::cout << "Result: " << result << '\n';
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}

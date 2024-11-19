#include <iostream>
using namespace std;
int main()
{{
    double num1,num2;
    char opertaion;
    td::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;
    
if (operation == '+') std::cout << "Result: " << num1 + num2;
    else if (operation == '-') std::cout << "Result: " << num1 - num2;
    else if (operation == '*') std::cout << "Result: " << num1 * num2;
    else if (operation == '/') {
        if (num2 != 0) std::cout << "Result: " << num1 / num2;
        else std::cout << "Error: Division by zero!";
    } else {
        std::cout << "Error: Invalid operation!";
    }

    return 0;
}
}
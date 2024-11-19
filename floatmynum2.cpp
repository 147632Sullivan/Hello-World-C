#include <iostream>
using namespace std;

int main()
{
    {
       // Initialize an integer and convert it to double
    int intValue = 15; // Example integer value
    double doubleValue = static_cast<double>(intValue); // Cast int to double

    // Initialize a boolean variable
    bool boolNotTrue = 0; // 0 is equivalent to false

    // Output the values
    std::cout << "Integer value: " << intValue << std::endl;
    std::cout << "Double value after casting: " << doubleValue << std::endl;
    std::cout << "Boolean value (0 = false): " << std::boolalpha << boolNotTrue << std::endl;

    return 0;
}
}
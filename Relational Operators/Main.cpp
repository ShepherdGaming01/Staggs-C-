#include <iostream>

int main(){

    //Relational Operators
    int number1 {45};
    int number2 {60};

    std::cout << "number 1: " << number1 << std::endl;
    std::cout << "number 2: " << number2 << std::endl;

    std::cout << std::endl;
    std::cout << "Compairing Variables" << std::endl;

    std::cout << std::boolalpha; //Make bool show up as true/false instead of 1/0
    //stress the need for parentheses here
    std::cout << "number 1 < number 2: " << (number1 < number2) << std::endl;
    std::cout << "number 1 <= number 2: " << (number1 <= number2) << std::endl;
    std::cout << "number 1 > number 2: " << (number1 > number2) << std::endl;
    std::cout << "number 1 >= number 2: " << (number1 >= number2) << std::endl;
    std::cout << "number 1 = number 2: " << (number1 == number2) << std::endl;
    //std::cout << std::noboolalpha;
    std::cout << "number 1 != number 2: " << (number1 != number2) << std::endl;

    std::cout << std::endl;
    std::cout << "Store comparison result and use it later" << std::endl;

    bool result = (number1 == number2);

    std::cout << number1 << " = " << number2 << ": " << result << std::endl;

    return 0;

}
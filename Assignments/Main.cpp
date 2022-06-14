#include <iostream>

int main(){

    //Assignments
    int var1{123}; // Declare and initialize
    std::cout << "var 1:" << var1 << std::endl;

    var1 = 55; // Assign
    std::cout << "var 1:" << var1 << std::endl;

    std::cout << std::endl;

    std::cout << "--------------------" << std::endl;

    std::cout << std::endl;

    double var2 {44.55}; // Declare and initialize
    std::cout << "var 2:" << var2 << std::endl;

    var2 = 99.99; //Assign
    std::cout << "var 2:" << var2 << std::endl;

    std::cout << std::endl;

    std::cout << "--------------------" << std::endl;

    std::cout << std::endl;

    bool state{false}; //Declare and initialize
    std::cout << std::boolalpha;
    std::cout << "state: " << state << std::endl;

    state = true; //Assign

    std::cout << "state: " << state << std::endl;

    //Auto type deduction
    //Careful about auto assignments
    auto var3 {333u}; //Declare and initialize with type deduction

    var3 = -22; // Assign negative number. Danger!

    std::cout << "var 3:" << var3 << std::endl;

    return 0;

}
#include <iostream>
#include <iomanip>

int main(){

    //Declare and initialize the variables
    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    //print out the sizes
    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << std::endl;

    std::cout << std::setprecision(20); //control the precison from std::cout
    std::cout << "Number 1 is: " << number1 << std::endl; //7 digits
    std::cout << "Number 2 is: " << number2 << std::endl; // 15'ish digits
    std::cout << "Number 3 is: " << number3 << std::endl; // 15+ digits

    /* Precision gone wrong
    float number4 {192400023};
    number4 = number4 + 1;
    std::cout << "number 4 is: " << number4 << std::endl;
    */
    
    //Scientific notation
    //What we have seen so far in the terms of floating point types
    //is fixed notation. There is another notation, scientific
    //that is handy if you have really huge numbers or small numbers
    //to represent

   
   double number5 {192400023};
   double number6 {1.92400023e8};
   double number7 {1.924e8};
   double number8 {0.00000000003498};
   double number9 {3.498e-11};

    std::cout << "number 5:" << number5 << std::endl;
    std::cout << "number 6:" << number6 << std::endl;
    std::cout << "number 7:" << number7 << std::endl;
    std::cout << "number 8:" << number8 << std::endl;
    std::cout << "number 9:" << number9 << std::endl;

   
    double number10{ 5.6 };
    double number11{}; //Initialized to 0
    double number12{}; //Initialized to 0

    //Infinity
    double result {number10 / number11};

    std::cout << number10 << " / " << number11 << " yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;

    //NaN
    result = number11 / number12;

    std::cout << number11 << "/" << number12 << " = " << result << std::endl;
   

    return 0;

}
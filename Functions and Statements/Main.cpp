#include <iostream>

int addNumbers(int first_param, int second_param){ //first function

    int result = first_param + second_param;
    return result;

}

int main(){ //second function

    int first_number {13}; //first statement
    int second_number {7}; //second statement

    std::cout << "First Number: " << first_number << std::endl; //prints 13
    std::cout << "Second Number: " << second_number << std::endl; //prints 7

    int sum = first_number + second_number;
    std::cout << "Sum: " << sum << std::endl; //prints 20

    sum = addNumbers(25,7);
    std::cout << "Sum: " << sum << std::endl; //prints 32

    sum =  addNumbers(15,45);
    std::cout << "Sum: " << sum << std::endl; //prints 60

    return 0;
}
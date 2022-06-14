#include <iostream>

int main(){

    //Postfix
    int value = 5;

    std::cout << "The value is (incrementing): " << value++ << std::endl;
    std::cout << "The value is: " << value << std::endl;

    std::cout << std::endl;

    //Decrement with Postfix

    //Reset value to five
    value = 5;

    std::cout << "The value is (decrementing): " << value-- << std::endl;
    std::cout << "The value is: " << value << std::endl;

    std::cout << std::endl;

    //Prefix
    value = 5;

    ++value;
    std::cout << "The value is (prefix++): " << value << std::endl;

    //Reset value to five
    value = 5;
    std::cout << "The value is (prefix++ in place): " << ++value << std::endl;

    std::cout << std::endl;

    //Prefix : Decrementing
    //Reset value to five
    value = 5;
    --value;
    std::cout << "The value is (prefix--): " << value << std::endl;

    //Reset value to five
    value = 5;
    std::cout << "The value is (prefix-- in place): " << --value << std::endl;

    return 0;
}
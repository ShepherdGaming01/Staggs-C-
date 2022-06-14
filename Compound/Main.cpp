#include <iostream>

int main(){

    //compound
    int value {45};

    std::cout << "The value is: " << value << std::endl;

    std::cout << std::endl;
    value +=5; //Equal to adding five to value
    std::cout << "The value is (after adding 5): " << value << std::endl; //50

    std::cout << std::endl;
    value -=5; //Equal to subtracting five from value
    std::cout << "The value is (after subtracting 5): " << value << std::endl; //45

    std::cout << std::endl;
    value *=2; //Equal to multiplying by two
    std::cout << "The value is (after multiplying by 2): " << value << std::endl; //90

    std::cout << std::endl;
    value /=3;
    std::cout << "The value is (after dividing by 3): " << value << std::endl; //30

    std::cout << std::endl;
    value %= 11;
    std::cout << "The value is (after a modulus 11): " << value << std::endl; //8

    return 0;
}
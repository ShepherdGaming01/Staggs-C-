#include <iostream>

int main(){
    //Do while loops
    //Does the loop before it runs the test
    
    //Writing out the code 10 times
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello World" << std::endl;

    std::cout << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << std::endl;

    //Do While Loop
    const int count{10};
    size_t i{0}; //Iterator declaration
    
    do{
        std::cout << i << ": Hello World" << std::endl;
        ++i; // Incrementation 
    }while(i < count); //test

    std::cout << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << std::endl;

    return 0;

}
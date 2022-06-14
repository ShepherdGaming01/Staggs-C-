#include <iostream>

int main(){
    
    //While loops
    //Write the code 10 times
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
    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;

    const size_t count{10};
    size_t i {0};

    while(i < count){ //test
        std::cout << i << ": Hello World" << std::endl;
        ++i; //Increment
    }
    std::cout << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;

    return 0;
}
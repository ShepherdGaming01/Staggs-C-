#include <iostream>

int main(){

//For Loops
//Just writing the code out 10 times
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
std::cout << "--------------------" << std::endl;
std::cout << std::endl;

//Normal for loop
//i is only usable inside the brackets, if you want to use it outside you have to make it outside
for(unsigned int i{0}; i < 10; ++i){ //set i to zero, check if i is less than 10, add 1 to i
    //What ever I want the loop to run
    std::cout << "Hello World 2.0" << std::endl;
}
std::cout << std::endl;
std::cout << "--------------------" << std::endl;
std::cout << std::endl;

//Use size_t: a representation of some unsigned int for posivite numbers
for(size_t i{0}; i < 10; ++i){
    std::cout << i << ": Hello World 3.0" <<std::endl;
}
std::cout << std::endl;
std::cout << "--------------------" << std::endl;
std::cout << std::endl;

return 0;

}
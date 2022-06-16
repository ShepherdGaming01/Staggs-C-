#include <iostream>

int main(){

    //Null pointer safety
    //Verbose nullptr check
    std::cout << std::endl;
    std::cout << "Verbose nullptr check: " << std::endl;

    int * p_number{};//Initialized to nullptr
    p_number = new int(7);

    if(!(p_number == nullptr)){
        std::cout << "p_number points to a valid address: " << p_number << std::endl;
        std::cout << "*p_number: " << *p_number << std::endl;
    }else{
        std::cout << "p_number points to a invalid address: " << std::endl;
    }

    delete p_number;
    nullptr;

    std::cout << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << std::endl;

    int * p_number1{};
    
    if(p_number1){
        std::cout << "p_number1 points to a valid address: " << p_number << std::endl;
        std::cout << "*p_number1: " << *p_number << std::endl;
    }else{
       std::cout << "p_number1 points to a invalid address: " << std::endl; 
    }

    delete p_number1;
    nullptr;

    //It is ok to call delete on a nullptr
    int * p_number2 {};
    delete p_number2; // This will not cause a problem if p_number2 contains nullptr


    return 0;

}
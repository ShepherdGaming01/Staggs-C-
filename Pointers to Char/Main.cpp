#include <iostream>

int main(){

    //Pointers to characters
    //Only works with a const char
    const char * message {"Hello World!"};

    //*message ="b"; 
    //Will give a compiler error, you can not change the message

    std::cout << "Message: " << message << std::endl;

    //Allow users to modify the string
    char message1[] {"Hello World!"};;
    message1[0] = 'b';
    std::cout << "message1: " << message1 << std::endl;

    return 0;

}
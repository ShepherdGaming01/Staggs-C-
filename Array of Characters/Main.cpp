#include <iostream>

int main(){

    //Array of characters

    //Declare array
    char message [5] {'H','e','l','l','o'};

    //Print out the array through looping
    std::cout << "message: ";
    for (auto c : message){
        std::cout << c;
    }

    std::cout << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << std::endl;

    //change characters in our array
    message[1] = 'a';
    
    //Print out the array through looping
    std::cout << "message: ";
    for (auto c : message){
        std::cout << c;
    }

    std::cout << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << std::endl;

    //why you need to show end of string
    std::cout << "message: " << message << std::endl;

    std::cout << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << std::endl;

    //include '/0' so that the array knows the string has ended
    char message1 [] {'H','e','l','l','o','\0'};
    std::cout << "message1: " << message1 << std::endl;
    std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;

    std::cout << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << std::endl;

    //by making the array one larger it auto puts the null in
    char message2 [6] {'H','e','l','l','o'};
    std::cout << "message2: " << message2 << std::endl;
    std::cout << "sizeof(message2): " << sizeof(message2) << std::endl;

    std::cout << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << std::endl;

    //Not a c string because it has no null
    char message3 [] {'H','e','l','l','o'};
    std::cout << "message3: " << message3 << std::endl;
    std::cout << "sizeof(message3): " << sizeof(message3) << std::endl;

    std::cout << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << std::endl;

    //String literal
    char message4 [] {"Hello World, how are you doing?"};
    std::cout << "message4: " << message4 << std::endl;
    std::cout << "sizeof(message4): " << sizeof(message4) << std::endl;

    std::cout << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << std::endl;

    //does not work with numbers
    int numbers [] {1, 2, 3, 4, 5, 6};
    std::cout << "Numbers: " << numbers << std::endl;
    
    return 0;

}
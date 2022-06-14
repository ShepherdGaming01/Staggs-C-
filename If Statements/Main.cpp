#include <iostream>

int main(){

    //If Statements
    int number1{75};
    int number2{60};
    bool result = (number1 < number2); //Epression yielding the condition

    std::cout << std::boolalpha << "result: " << result << std::endl;

    std::cout << std::endl;
    std::cout << "free standing if statement" << std::endl;
/*
    //if(result){
    if(result == true){
    std::cout << number1 << " is less than " << number2 << std::endl;
    }

    //if(!result){
    if(!result == true){
    std::cout << number1 << " is not less than " << number2 << std::endl;
    }
*/
/*
    //Using else
    std::cout << std::endl;
    std::cout << "Using the else cause:" << std::endl;

    if(result == true){
    std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
    std::cout << number1 << " is not less than " << number2 << std::endl;
    }
*/
/*
    //using expression as condition directly
    std::cout << std::endl;
    std::cout << "Using expression as condition: " << std::endl;

    if(number1 < number2){
    std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
    std::cout << number1 << " is not less than " << number2 << std::endl;
    }
*/

    //Nesting if statements
    std::cout << std::endl;
    std::cout << "Nesting if statements" << std::endl;

    bool red = {false};
    bool green = {true};
    bool yellow = {false};
    bool police_stop{true};

    //if green: go
    //if red, yellow: stop
    //if green and police_stop: stop

    if(red){
    std::cout << "Stop" << std::endl;
    }
    if(yellow){
    std::cout << "Stop" << std::endl;
    }
    if(green){
    std::cout << "Go" << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Police officer stops(verbose)" << std::endl;
    if(green){
    if(police_stop){
    std::cout << "Stop" << std::endl;
    }
    std::cout << "Go" << std::endl;
    }

    return 0;

}
#include <iostream>

int main(){

    bool red_light {true};
    bool green_light {false};

    if(red_light == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go through!" << std::endl;
    }

    return 0;

}
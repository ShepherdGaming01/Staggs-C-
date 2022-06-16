#include <iostream>

int main(){

    //When New Fails
    //int * data = new int[100000000000]; will crash because of to much data usage
    /*
    for(size_t i{0}; i < 10000000; ++i){
        int * data = new int[100000000];
    }
    */

   //exception
   //std::nothrow
    /*
    for(size_t i{0}; i < 100; ++i){
        try{
            int * data = new int[100000000];
        }catch(std::exception& ex){
            std::cout << "Something went wrong: " << ex.what() << std::endl;
        }
    }
    */

   for(size_t i{0}; i < 100; ++i){
        int * data = new(std::nothrow) int[10000000000];

        if(data!=nullptr){
            std::cout << "Data allocated" << std::endl;
        }else{
            std::cout << "Data allocation failed" << std::endl;
        }
   }
    std::cout << "Program ending well" << std::endl;

    return 0;

}
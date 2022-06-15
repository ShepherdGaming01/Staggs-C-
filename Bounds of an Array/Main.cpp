#include <iostream>

int main(){

    //trying to change data in an array
    //Array bounds
    int numbers[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    //Read beyond bounds: will read garbage or crash the program
    //std:: cout << "number[12]: " << number[12] << std::endl;

    /*
    Write beyond bounds. The complier allows it. but you don't own
    the memory at index 12, so other programs may modify it and your
    program may read bogus data at a later time. Or you can even
    corrupt data used by other parts of your program
    */
   /*
   numbers[12] = 1000;
   std::cout << "numbers[12]: " << numbers[12] << std::endl;
    */

    return 0;

}
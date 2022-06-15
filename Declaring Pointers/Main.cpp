#include <iostream>

int main(){

    //Declaring pointers
    int * P_number {}; // can only store an address of a variable of type int

    double * P_fractional_number{}; // can only store an address of a variable of type double

    //Expicitely initialize to nullptr
    int * P_number1{nullptr};
    int * P_fractional_number1{nullptr};

    //All pointers variables have the same size
    std::cout << "Size of number pointer: " << sizeof(P_number) << ", size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of fractional_number pointer: " << sizeof(P_fractional_number) << ", size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of number1 pointer: " << sizeof(P_number1) << ", size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of fractional_number1 pointer: " << sizeof(P_fractional_number1) << ", size of int:" << sizeof(int) << std::endl;

    //position of the * does not matter
    int*  p_number2{nullptr};
    int * P_number3{nullptr};
    int  *P_number4{nullptr};
    // All work the same
    // int  *p_number4 format is easier to understand when you have multipule variables declaried on the same line

    int  *p_number5{}, other_int_var{};
    int*  P_number6{}, other_int_var6{};
    //Confusing as you wonder if other_int_var6 is also a pointer to int.
    //It is not the structure  is exactly the same for the previous statement

    //It is better to sperate these declarations on different lines though
    int  *P_number7{};
    int other_int_var7{}; 
    // No room for confusion

    //Initializing pointers and assigning them data

    //We know that pointers store addresses of variables
    int int_var {43};
    int *p_int{&int_var};
    //The address of operator (&);

    std::cout << "Int var: " << int_var << std::endl;
    std::cout << "p_int (address in memory): " << p_int << std::endl;

    //You can also change the address stored in a pointer at any time
    int int_var1 {65};

    int_var1 = 126;

    p_int = &int_var1; // Assign a different address to the pointer
    std::cout << "p_int (with different address): " << p_int << std::endl;
    
    /*
    Pointer types can only store the type that is declared
    int *p_int1{nullptr};
    double double_var{33};
    
    p_int1 = &double_var; 
    this will end with a compile error
    */

   //Dereferencing a pointer:

   int * p_int2 {nullptr};
   int int_data {56};
   p_int2 = &int_data;

   std::cout << "Value: " << * p_int2 << std::endl;

    return 0;

}
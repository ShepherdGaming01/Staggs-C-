#include <iostream>

int main(){

    //postive or negative numbers
    signed int value1 {10};
    signed int value2 {-300};

    std::cout << "Value 1: " << value1 << std::endl;
    std::cout << "Value 2: " << value2 << std::endl;
    std::cout << "Size of Value 1: " << sizeof(value1) << std::endl;
    std::cout << "Size of Value 2: " << sizeof(value2) << std::endl;

    //only for postive numbers
    unsigned int value3 {4};

    short short_var {-32768}; //2 bytes
    short int short_int {455}; 
    signed short signed_short {122}; 
    signed short int signed_short_int {-456}; 
    unsigned short int unsigned_short_int {456};

    int int_var {55}; //4 bytes
    signed signed_var {66}; 
    signed int signed_int {77}; 
    unsigned int unsigned_int{77};

    long long_var {88}; //4 or 8 bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int{44};

    long long long_long {888}; //8 bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {1234};
    unsigned long long int unsigned_long_long_int{1234};

    std::cout << "------------------------------------" << std::endl;

    std::cout << "Short variable: " << short_var << " , size: " << sizeof(short_var) << " bytes" << std::endl;
    std::cout << "Short int: " << short_int << " , size: " << sizeof(short_int) << " bytes" << std::endl;
    std::cout << "Signed short: " << signed_short << " , size: " << sizeof(signed_short) << " bytes" << std::endl;
    std::cout << "Signed short int: " << signed_short_int << " , size: " << sizeof(signed_short_int) << " bytes" << std::endl;
    std::cout << "unsigned short int: " << unsigned_short_int << " , size: " << sizeof(unsigned_short_int) << " bytes" << std::endl;

    std::cout << "------------------------------------" << std::endl;

    std::cout << "int: " << int_var << " , size: " << sizeof(int_var) << " bytes" << std::endl;
    std::cout << "signed: " << signed_var << " , size: " << sizeof(signed_var) << " bytes" << std::endl;
    std::cout << "signed int: " << signed_int << " , size: " << sizeof(signed_int) << " bytes" << std::endl;
    std::cout << "unsigned int: " << unsigned_int << " , size: " << sizeof(unsigned_int) << " bytes" << std::endl;

    std::cout << "------------------------------------" << std::endl;

    std::cout << "long: " << long_var << " , size: " << sizeof(long_var) << " bytes" << std::endl;
    std::cout << "long int: " << long_int << " , size: " << sizeof(long_int) << " bytes" << std::endl;
    std::cout << "signed long: " << signed_long << " , size: " << sizeof(signed_long) << " bytes" << std::endl;
    std::cout << "signed long int: " << signed_long_int << " , size: " << sizeof(signed_long_int) << " bytes" << std::endl;
    std::cout << "unsigned long int: " << unsigned_long_int << " , size: " << sizeof(unsigned_long_int) << " bytes" << std::endl;
    
    std::cout << "------------------------------------" << std::endl;

    std::cout << "long long: " << long_long << " , size: " << sizeof(long_long) << " bytes" << std::endl;
    std::cout << "long long int: " << long_long_int << " , size: " << sizeof(long_long_int) << " bytes" << std::endl;
    std::cout << "signed long long: " << signed_long_long << " , size: " << sizeof(signed_long_long) << " bytes" << std::endl;
    std::cout << "signed long long int: " << signed_long_long_int << " , size: " << sizeof(signed_long_long_int) << " bytes" << std::endl;
    std::cout << "unsigned long long int: " << unsigned_long_long_int << " , size: " << sizeof(unsigned_long_long_int) << " bytes" << std::endl;
    




    return 0;

}
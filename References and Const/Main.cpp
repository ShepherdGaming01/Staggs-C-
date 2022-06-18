#include <iostream>

int main(){

    //Reference and Const
    //Non const reference
    std::cout << std::endl;
    std::cout << "Non const reference: " << std::endl;
    int age {27};
    int& ref_age{age};

    std::cout << "age: " << age << std::endl;
    std::cout << "ref_age: " << ref_age << std::endl;

    //Can modify original variable through reference

    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << std::endl;

    std::cout << "Modify original variable through reference: " << std::endl;

    ref_age++; //Modify through reference

    std::cout << "age: " << age << std::endl;
    std::cout << "ref_age: " << ref_age << std::endl;

    //Const reference
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << std::endl;

    std::cout << "Const references: " << std::endl;
    age = 30;
    const int& const_ref_age{age};

    std::cout << "age: " << age << std::endl;
    std::cout << "const_ref_age: " << const_ref_age << std::endl;

    //Try to modify through const reference
    //const_ref_age = 31; will result in an error

    //Can achieve the same thing as const ref with pointer: const pointer to const data
    //Remember that a reference by default is just like a const pointer. All we need
    //to do is make the const pointer point to const data

    const int * const const_ptr_to_const_age{&age};

    // *const_ptr_to_const_age = 32; //Error

    // const int& const weird_ref_age{age}; //Error

    //trying to modify through const reference
    //const_ref_age = 31; //Error

    return 0;

}
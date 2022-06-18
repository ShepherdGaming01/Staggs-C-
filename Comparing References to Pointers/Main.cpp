#include <iostream>

int main(){

    //Comparing References to Pointers

    /*
    References

    -Don't use dereferencing for reading and writing
    -can't be changed to reference something else
    -must be initialized at declaration

    Pointers

    -Must go through dereference operator to read/write through pointed to value
    -can be changed to point somewhere else
    -can be declared un-initialized(will contain garbage address though)
    */

   //Declaring pointer and reference

   double double_value {12.34};
   double& ref_double_value {double_value}; // Reference to double_value
   double* p_double_value {&double_value}; //Pointer to double_value

   //Reading
   std::cout << "double_value: " << double_value << std::endl;
   std::cout << "ref_double_value: " << ref_double_value << std::endl;
   std::cout << "p_double_value: " << p_double_value << std::endl;
   std::cout << "*p_double_value: " << *p_double_value << std::endl;

    //Writing through pointer
    std::cout << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "Writing through pointer: " << std::endl;

    *p_double_value = 15.44;

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    std::cout << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << std::endl;

    //Writing through reference
    std::cout << "Writing through reference: " << std::endl;

    ref_double_value = 18.44;

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    double some_other_double{78.45};

    std::cout << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << std::endl;

    //Make the reference, reference something else.
    ref_double_value = some_other_double;

    std::cout << "Making the reference, reference something else: " << std::endl;

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    std::cout << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << std::endl;

    //Make the pointer point to something else
    p_double_value = &some_other_double;
    std::cout <<"Making the pointer point somewhere else: " << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "&double_value: " << &double_value << std::endl;
    std::cout << "&ref_double_value: " << &ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    *p_double_value = 555.5;

    std::cout << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "&double_value: " << &double_value << std::endl;
    std::cout << "&ref_double_value: " << &ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    /*
    double double_value {12.34};
    double& ref_double_value {double_value}; //Reference to double value
    double other_double_value {100.23};

    //This will work, but it doesn't make ref_double_value reference other_double_value
    //it merely changes the value referenced by ref_double_value to 100.23
    
    ref_double_value = other_double_value;

    //If you change ref_double_value now, other_double_value stays the same
    //proving that ref_double_value is not referencing other_double_value.

    ref_double_value = 333.33;
    */
    return 0;
}
#include <iostream>

int main(){

    //Dynamic Arrays
    const size_t size{10};

    //Different ways you can declare an array
    //Dynamically and how they are initialized

    double * p_salaries {new double[size]}; //salaries array will contain garbage values

    int * p_students {new(std::nothrow) int[size]{}}; //All values initialized to 0

    double * p_scores {new(std::nothrow) double[size]{1, 2, 3, 4, 5}}; //Allocating memory space for an array of size
                                                                        //double vars. First 5 will be initialized with
                                                                        //1, 2, 3, 4, 5, and the rest will be 0's
    //nullptr check and use the allocated array
    if(p_scores){
        std::cout << "size of scores (it's a regular pointer): " << sizeof(p_scores) << std::endl;
        std::cout << "Successfully allocated memory for scores." << std::endl;

        //Print out elements. Can use regular array access notation, or pointer arithmetic
        for(size_t i{}; i < size; ++i){
            std::cout << "Value: " << p_scores[i] << ": " << *(p_scores + i) << std::endl;
        }
    }

    delete[] p_scores;
    p_scores = nullptr;

    delete[] p_students;
    p_students = nullptr;

    delete[] p_salaries;
    p_salaries = nullptr;

    //static arrays Vs dynamic arrays
    std::cout << "----------------------------" << std::endl;

    int scores[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //Lives on the stack

    std::cout << "scores size: " << std::size(scores) << std::endl;
    /*
    //Pointers initialized with dynamic arrays are different from arrays:
    //std::size doesn't work on them, and they don't support range based for loops

    double * temperatures = new double[size] {10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0};

    //std::cout << "std::size(temperatures): " << std::size(temperatures) << std::endl; //Error

    //Error: temperatures doesn't have array properties that are needed for
    // the range based for loop to work.
    for (double temp: temperatures){
        std::cout << "temperature: " << temp << std::endl;
    }

    //We say that dynamically allocated array has decayed into a pointer
    */
    return 0;

}
#include <iostream>

int main(){

    //Declare an array of ints
    int score[10];

    //read data
    std::cout << "score [0]: " << score[0] << std::endl;

    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << std::endl;

    //read with a loop
    for(size_t i {0}; i < 10; ++i){
        std::cout << "score[" << i << "]:" << score[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << std::endl;

    //write data into an array
    score[0] = 20;
    score[1] = 21;
    score[2] = 22;
    score[3] = 55;
    score[4] = 44;
    score[5] = 100;
    score[6] = 1109;
    score[7] = 123;
    score[8] = 15645;
    score[9] = 103;

    for(size_t i {0}; i < 10; ++i){
        std::cout << "score[" << i << "]:" << score[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << std::endl;

    //using a for loop to input data into array
    for(size_t i{0}; i < 10; ++i){
        score[i] = i * 10;
    }

    for(size_t i {0}; i < 10; ++i){
        std::cout << "score[" << i << "]:" << score[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << std::endl;

    //Declare and initialize at the same time
    double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

    for(size_t i{0}; i < 5; ++i){
        std::cout << "Salary[" << i << "]:" << salaries[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << std::endl;

    //If you do not initialize all the elements, those left out are zero
    int families[5] {12, 7, 5};

    for(size_t i{0}; i < 5; ++i){
        std::cout << "families[" << i << "]:" << families[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << std::endl;

    //Omitting the size of the array
    int class_sizes[] {10, 12, 15, 11, 18, 17};

    //Will print this with a range based for loop
    for(auto value : class_sizes){
        std::cout << "value: " << value << std::endl;
    }

    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << std::endl;

    //Sum up scores array, store result in sum
    int scores[] {2, 4, 6, 7, 8, 9, 12, 15, 167};
    int sum {0};

    for(int element : scores){
        sum += element;
    }
    std::cout << "Score sum:" << sum << std::endl;
    
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << std::endl;

    return 0;

}
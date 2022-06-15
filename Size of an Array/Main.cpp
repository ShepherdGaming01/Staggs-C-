#include <iostream>

int main(){

    //Find and use the size of your array
    int score [] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int count { std::size(score)};

    for(size_t i {0}; i < count; ++i){
        std::cout << "score[" << i << "]:" << score[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "sizeof (score): " << sizeof(score) << std::endl;
    std::cout << "sizeof (score[0]): " << sizeof (score[0]) << std::endl;

    int counts {sizeof(score)/sizeof(score[0])};

    for(size_t i {0}; i < counts; ++i){
        std::cout << "score [" << i << "]: " << score[i] << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;

    //Range based for loop
    for (auto i : score){
        std::cout << "Value: " << i << std::endl;
    }

    return 0;

}
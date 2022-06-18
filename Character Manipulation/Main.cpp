#include <iostream>

int main(){

    //Character Manipulation
    /*
    -check if character is alphanumeric
    -check if character is alphabetic
    -check if a character is blank
    -check if character is lowercase or uppercase
    -check if a character is a digit
    -turning a character to lower/uppercase using the std::tolower and std::toupper functions
    */

   //Check if character is alphanumeric
   std::cout << std::endl;
   std::cout << "std::isalnum: " << std::endl;

   std::cout << "C is alphanumeric: " << std::isalnum('C') << std::endl;
   std::cout << "^ is alphanumeric: " << std::isalnum('^') << std::endl;

   //test condition
   char input_char {'*'};
   if(std::isalnum(input_char)){
    std::cout << input_char << " is alphanumeric." << std::endl;
   }else{
    std::cout << input_char << " is not alphanumeric." << std::endl;
   }

    std::cout << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << std::endl;

    //Check if character is alphabetic
    std::cout << "std::isalpha: " << std::endl;
    std::cout << "C is alphabetic: " << std::isalpha('C') << std::endl;
    std::cout << "^ is aplhabetic: " << std::isalpha('^') << std::endl;
    std::cout << "7 is alphabetic: " << std::isalpha('7') << std::endl;

    std::cout << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << std::endl;

    //Check if a character is blank
    std::cout << "std::isblank: " << std::endl;
    char message[] {"Hello there. How are you doing? The sun is shining."};
    std::cout << "message: " << message << std::endl;

    //Find and print blank index
    size_t blank_count{};
    for (size_t i{0}; i < std::size(message); ++i){
        //std::cout "Value: " << message[i] << std::endl;
        if(std::isblank(message[i])){
            std::cout << "Found a blank character at index: [" << i << "]" << std::endl;
            ++blank_count;
        }
    }

    std::cout << "In total we found " << blank_count << " blank characters." << std::endl;
    
    std::cout << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << std::endl;
   
   //Check if character is lower or uppercase
   std::cout << "std::islower and std::isupper: " << std::endl;

   std::cout << std::endl;
   char thought[] {"The C++ Programming Language is one of the most used on the Planet"};
   int lowercase_count{};
   int uppercase_count{};

   //Print original string for ease of comparison on the terminal
   std::cout << "Original string: " << thought << std::endl;

   for(auto character : thought){
        if(std::islower(character)){
            std::cout << " " << character;
            ++lowercase_count;
        }
        if(std::isupper(character)){
            ++uppercase_count;
        }
   }
   std::cout << std::endl;
   std::cout << "Found " << lowercase_count << " lowercase characters and "
   << uppercase_count << " uppercase characters." << std::endl;

    std::cout << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << std::endl;

    //Check if a character is a digit
    std::cout << "std::isdigit: " << std::endl;

    char statement[] {"Mr hamilton owns 221 cows. That's a lot of cows! The kid exclamed."};
    std::cout << "Statement: " << statement << std::endl;

    size_t digit_count{};

    for(auto character : statement){
        if(std::isdigit(character)){
            std::cout << "Found digit: " << character << std::endl;
            ++digit_count;
        }
    }
    std::cout << "Found " << digit_count << " digits in the statement string" << std::endl;

    std::cout << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << std::endl;

    //Turning a character using std::tolower() and std::toupper() function
    std::cout << "std::tolower and std::toupper: " << std::endl;
    char original_str[] {"Home. The feeling of belonging"};
    char dest_str[std::size(original_str)];

    //Turn this to uppercase. Change the array in place
    for(size_t i{}; i < std::size(original_str); ++i){
        dest_str[i] = std::toupper(original_str[i]);
    }

    std::cout << "Original string: " << original_str << std::endl;
    std::cout << "Uppercase string: " << dest_str << std::endl;

    //Turn this lowercase. Change the array in place
    for(size_t i{}; i < std::size(original_str); ++i){
        dest_str[i] = std::tolower(original_str[i]);
    }

    std::cout << "Lowercase string: " << dest_str << std::endl;

   return 0;
}
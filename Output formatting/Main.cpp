#include <iostream>
#include <iomanip>
#include <ios>

int main(){

    //Output formatting
    //std::endl
    std::cout << "Hello";
    std::cout << "World";

    std::cout << std::endl;

    std::cout << "-------------" << std::endl;

    std::cout << "Hello" << std::endl;
    std::cout << "World" << std::endl;

    std::cout << std::endl;

    std::cout << "Hello\n";
    std::cout << "World\n";
    std::cout << std::endl;

    //std::flush: flushes the output buffer to its final destination.
    std::cout << "This is a nice message....." << std::endl << std::flush;
    //After this std::flush, we're sure that at this line, the message has been sent.
    //to the stream. This may be important in some applications.

    std::cout << std::endl;
    //std::setw
    std::cout << "Unformatted table: " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25 " << std::endl;
    std::cout << "Stanley" << " " << "Woods" << " 33 " << std::endl;
    std::cout << "Jordan" << " " << "Parker" << " 45 " << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21 " << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27 " << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29 " << std::endl;

    std::cout << std::endl;
    std::cout << "Formatted Table: " << std::endl;
    std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << "33" << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << "27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;

    //Right Justified
    int col_width = 20;

    std::cout << std::right; //left for left justified
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(5) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(5) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(5) << "29" << std::endl;

    //Internal Justification
    std::cout << std::endl;
    std::cout << "Internal justified: " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;

    //std::setfill

    std::cout << std::left;
    std::cout << std::setfill('-'); //fill character
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(5) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(5) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(5) << "29" << std::endl;

    //std::boolalpha and noboolalpha: control bool output format: 1/0 or True/False
    bool condition {true};
    bool other_condition {false};

    std::cout << "condition: " << condition << std::endl;
    std::cout << "other_condition: " << other_condition << std::endl;
    std::cout << std::endl;

    std::cout << std::boolalpha;
    std::cout << "condition: " << condition << std::endl;
    std::cout << "other_condition: " << other_condition << std::endl;
    std::cout << std::endl;

    std::cout << std::noboolalpha;
    std::cout << "condition: " << condition << std::endl;
    std::cout << "other_condition: " << other_condition << std::endl;

    //std::showpos and noshowpos: show or hide the + sign for positive numbers
    int pos_num {34};
    int neg_num {-45};

    std::cout << "postive number: " << pos_num << std::endl;
    std::cout << "negative number: " << neg_num << std::endl;
    std::cout << std::endl;

    std::cout << std::showpos;
    std::cout << "postive number: " << pos_num << std::endl;
    std::cout << "negative number: " << neg_num << std::endl;
    std::cout << std::endl;

    std::cout << std::noshowpos;
    std::cout << "positive number: " << pos_num << std::endl;
    std::cout << "negative number: " << neg_num << std::endl;

    //different number systems: std::dec, std::hex, std::oct
    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};

    std::cout << std::endl;
    std::cout << "Positive number in different bases: " << std::endl;
    std::cout << "Positive number in (dec): " << std::dec << pos_int << std::endl;
    std::cout << "Positive number in (hex): " << std::hex << pos_int << std::endl;
    std::cout << "Positive number in (oct): " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "Negative number in different bases: " << std::endl;
    std::cout << "Negative number in (dec): " << std::dec << neg_int << std::endl;
    std::cout << "Negative number in (hex): " << std::hex << neg_int << std::endl;
    std::cout << "Negative number in (oct): " << std::oct << neg_int << std::endl;

    std::cout << std::endl;
    std::cout << "Double variable in different bases: " << std::endl;
    std::cout << "Double variable in (dec): " << std::dec << double_var << std::endl;
    std::cout << "Double variable in (hex): " << std::hex << double_var << std::endl;
    std::cout << "Double variable in (oct): " << std::oct << double_var << std::endl;

    //showbase and noshowbase: show the base for integral types
    std::cout << "Positive number (noshowbase: default):" << std::endl;
    std::cout << "Positive number in (dec): " << std::dec << pos_int << std::endl;
    std::cout << "Positive number in (hex): " << std::hex << pos_int << std::endl;
    std::cout << "Positive number in (oct): " << std::oct << pos_int << std::endl;

    std::cout << "Positive number (showbase):" << std::endl;
    std::cout << std::showbase;
    std::cout << "Positive number in (dec): " << std::dec << pos_int << std::endl;
    std::cout << "Positive number in (hex): " << std::hex << pos_int << std::endl;
    std::cout << "Positive number in (oct): " << std::oct << pos_int << std::endl;

    //Uppercase your numbers
    std::cout << "Positive number (Uppercase):" << std::endl;
    std::cout << std::uppercase;
    std::cout << "Positive number in (dec): " << std::dec << pos_int << std::endl;
    std::cout << "Positive number in (hex): " << std::hex << pos_int << std::endl;
    std::cout << "Positive number in (oct): " << std::oct << pos_int << std::endl;

    double d {34.1};
    double e {101.99};
    double f {12.0};
    double g {45};

    std::cout << std::endl;
    std::cout << "Noshowpoint (defalut): " << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;

    std::cout << std::endl;
    std::cout << "Showpoint: " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;

    return 0;
}
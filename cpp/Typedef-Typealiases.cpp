#include <iostream>
#include <vector> // ----add this

// first let's

typedef std::string text_t;

// ^            ^
// typedef      aliases

// std::string is listing datatypes and text_t is the identifier

using ex2_t = std::string;
using num_n = int;

int main(){

    // typedef is a reserved keyboard for a existing data type that we can use to call a datatype
    //make it easier to read but we need vector lib for that so----

    // instead of using
    // std::string firstName = "Tillau467"
    // we can use

    text_t firstName = "Tillua";
    std::cout << firstName << std::endl;


    // but sometime it typedef can be more compplex to read that's why we usally use 'using'

    ex2_t ex2 = "And that's it for now!";
    std::cout << ex2 << std::endl;
    num_n num = 25;
    std::cout << num << std::endl;






    return 0;
}
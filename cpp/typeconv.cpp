#include <iostream>


int main(){

    // now we will learn conversion(basic)
    // what we will do is that we will convert a value of one data type to another
    // there are two ways to do this
    // Implicit -> automatic
    // Explicit -> Precede a value with new data type

    int x = 3.1415; // implicit

    std::cout << x << std::endl; //[Results is jsu 3 cz x is an int]

    double y = (int)5.1245; // Explicit what it weill do is that it will conv double into int
    std::cout << y << std::endl;  //[results are 5]

    char P = 100;

    std::cout << (char)P << std::endl; // conv num into char using the ascii table

    // but why do we need this? let's say there are 2 int x and y
    // if we div them to get a dec numb we might not get it
    // like 8/10 = 0.8 but as they were int so x/y = 0
    // to avoid this we use typeconv


    return 0;
}
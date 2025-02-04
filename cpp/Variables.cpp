#include<iostream>


int main(){

    // declare a whole number
    int x;
    // assign the integer
    x = 12;
    // or do it together
    int y = 14;
    // or use basic math
    int sum = x+y; // (+, -, *, /)

    int a = 12.32654; // but it can't store decimal number [output: 12]

    // double datatype will store deicmals
    double price = 12.99;

    // char datatype will store a single var. We also need to use these ''
    char grade = 'A'; // but it can't store more than one character

    // Boolean is a type of datatype that can be define with only true and false (it will show it as 1 or 0)
    bool lightstate = true;

    // string is a type of datatype that will save mulitiple char or sequence of text's [kind of like advance char], we also have to use std
    std::string myname = "tillua467";
    std::string example = "Why you are so dumb. Just understand it will store sentences 2";



    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << sum << std::endl;
    std::cout << price << std::endl;
    std::cout << grade << std::endl;
    std::cout << "The lights are " << lightstate << std::endl;
    std::cout << "My name is " << myname << std::endl;
    std::cout << example << std::endl;


    return 0;
}
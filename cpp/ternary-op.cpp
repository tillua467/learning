#include <iostream>

int main(){

    //Kind of drift off but today
    // we are going to learn ternary operators that is this ?: replacement of if/else
    // we can set conditon if it true it will use experssion1 and if it's false the expression2

    // example
    int grade;
    std::cout << "What's Your grade?" << std::endl;
    std :: cin >> grade;
    if (grade >= 60)
    {
        std::cout << "You pass" << std::endl;
    }

    else {
        std::cout << "You fail" << std::endl;
    }

    // another way to write this is this

    grade >= 60 ? std::cout << "You pass" << std::endl : std::cout << "You fail" << std::endl;

    // it works like this
    // condition ? experssion1(if it's true) [Not ;] : experssion2(False);[now ;]
    // although there is another way to do so
    std::cout << (grade >= 60 ? "You pass" : "You fail");
    // if we use bool then we only need to use " grade ?  .. : .. ; "




    return 0;
}
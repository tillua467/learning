#include <iostream>
#include <cmath>

int main(){

    // time for our first practice we will try to make a hypotenuse calc that will calculate the value of hypo
    double a, b, c;

    std::cout << "Enter the size of Perpendicular" << std::endl;
    std::cin >> a;
    std::cout << "Enter the size of Base" << std::endl;
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The size of Hypotenuse is " << c << std::endl;


    return 0;
}
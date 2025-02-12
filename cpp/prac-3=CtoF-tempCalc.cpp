#include <iostream>

int main(){

    double tempC, tempF;
    char unit;

    std::cout << "********************Temp Conv*****************" << std::endl;
    std::cout << "F = Farenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "**********************************************" << std::endl;
    std::cout << "What unit do you want?\n";
    std::cin >> unit;
    std::cout << "Enter the Tmp :";
    std::cin >> tempC;
    if (unit == 'F' || unit == 'f'){
        tempF = (1.8 * tempC) + 32.0;
        std::cout << "The Tmp in F is: " << tempF;
    }
    else if (unit == 'C' || unit == 'c') {
        tempF = (tempC - 32.0) / 1.8;
        std::cout << "The Tmp in F is: " << tempF;
    }
    else {
        std::cout << "That's a wrong output";
    }


    return 0;
}
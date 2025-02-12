#include <iostream>

int main(){

    int temp;
    // today i will learn how to use and or and not
    // they are use to make 2 or more conditions
    // we use && || ! [And Or Not]

    std::cout << "What's the Temp outside?" << std::endl;
    std::cin >> temp;

    if (temp > 0 && temp < 25) // with && we add two condition and they must met the condition to be able to run
    {
        std::cout << "Then it might be be quite cold outside" << std::endl;
    }
    else if (temp > 40 && temp < 27)
    {
        std::cout << "Then it might be be quite cold outside" << std::endl;
    }
    else if (temp == 26)
    {
        std::cout << "That's a good temp" << std::endl;
    }
    else
    {
        std::cout << "It might be a bad day then" << std::endl;
    }

    // but with we can write this code with small amount of code
    if (temp <=0 || temp >=26) // if temp is lower or equal to 0 or temp is greater or equal to 26
    {
        std::cout << "The weather is bad" << std::endl;
    }
    else
    {
        std::cout << "It's Good then" << std::endl;
    }

    // we can also use != this to say something is false like this
    bool sunny = false;

    if(sunny == true){
        std::cout<< "it is sunny outside" << std::endl;
    }
    if(sunny != true){
        std::cout << "It's cloudy outside" << std::endl;
    }



    return 0;
}
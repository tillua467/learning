#include <iostream>

int main(){

    // If statements are really simple
    // if the condition is true then Do it else not do it
    // for example if someone's age is 18 then the code will
    // Run else it will stop
    int age;
    std::cout << "what's Your Age?\n";
    std::cin >> age;
    if(age >= 18){ // We Used compariron operators so compare two things
                    // there are >= (greater or equal) <= (Lower or equal)
                    // > and < and for equal we use == cz one = this is assinging
    std::cout << "Yeah you can use this code" << std::endl;
    }
    else if(age <= 0) { // To add another if
    std::cout << "You aren't even Borned lamao" << std::endl;
    }// but now if we add Another if for age >= 100 here it will
    // instead run the first if Bcz technically the Condition has been meet
    // so if we want to add age >= 100 we need to add that at the top of
    // the code so the Order of the code does matter
    else{ // we use else so there is another function that will run if the "if" is false

    std::cout << "You are too young" << std::endl;
    }




    return 0;
}
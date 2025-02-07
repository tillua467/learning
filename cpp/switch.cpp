#include <iostream>

int main(){

    // if is goof but only there are 3 to 4 statements but when it's more than that it get's complictaed
    // for that we use switched how we do that? well let's learn that with a simple project
    // that is the week calc
    int week;
    std::cout << "Enter the week(1-7): ";
    std::cin >> week;
    // we will use switch
    switch (week) // there is switch with the datatype inside
    {
    case 1: // cases : if the week is 1 and if we use char or string the ans should be inside of ''
        std::cout << "It's Saturday!" << std::endl;
        break; // then break out of this loop

    case 2: // cases : if the week is 2
        std::cout << "It's Sunday!" << std::endl;
        break; // then break out of this loop

    case 3: // cases : if the week is 3
        std::cout << "It's Monday!" << std::endl;
        break; // then break out of this loop

    case 4: // cases : if the weel is 4
        std::cout << "It's Tuesday!" << std::endl;
        break; // then break out of this loop

    case 5: // cases : if the week is 5
        std::cout << "It's Wednesday!" << std::endl;
        break; // then break out of this loop

    case 6: // cases : if the week is 6
        std::cout << "It's Thursday!" << std::endl;
        break; // then break out of this loop

    case 7: // cases : if the week is 7
        std::cout << "It's Friday!" << std::endl;
        break; // then break out of this loop

    // now we have all of the cases but what if someone inputed a number that isn't 1 to 7
    // for that we need a default
    default:
    std::cout << "That doesn't exist Bro" << std::endl;
    break; // and break
    }
    // it's more ez to use and look cleaner


    return 0;
}
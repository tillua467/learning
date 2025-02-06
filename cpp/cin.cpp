#include <iostream>


// cout << (insertion operators)
// cin >> (extraction operators)
int main(){

    // while coding we might want input or data from the users for that we use cin with extraction operators
    // like this
    std::string name;
    std::string fullname;
    std::cout << "What's your name?" << std::endl;
    std::cin >> name; // Save as name
    std::cout << "Hello " << name << "!" << std::endl;
    // but it has a flaw if we use spaces it wont take it
    // for that we use getline function
    // but we also need to remove the white space that cin leave so we use con>>std::ws

    std::cout << "And your full name is?" << std::endl;

    std::getline(std::cin >> std::ws, fullname);

    std::cout << "So your full name is " << fullname << std::endl;


    return 0;
}
#include <iostream>

namespace first {
    // --we can create a function where we can add these value and
    // call them when needed
    int x = 1;
}

namespace dumb {

    std::string y = "Yes we can do this too you dumb";
}

int main(){

    // Namespace provides a solution for preventing name conflicts in large projects.
    // Each entity needs a unique name. A namespace allows for identically named
    // entities as long as the namespaces are different.
    // so like we cant do this
    /*
    int x = 0;
    int x = 1; it will cause error so--
    */
    int x = 5;
    std::string y = "So learn the next thing now";

    std::cout << x << std::endl;       // Prints main x
    std::cout << first::x << std::endl; // Prints first x
    std::cout << dumb::y << std::endl;  // Prints dumb x
    std::cout << y << std::endl;
    return 0;
}
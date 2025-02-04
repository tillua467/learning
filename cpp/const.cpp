#include <iostream>

int main(){
    /*
    Let's say we need a number that is only read-only or anyone or you dumbass will not change the number while
    working with a big code
    */

    double pi = 3.141594;
    // but let's say i accidentally do this
    pi = 4; // and bcz of that we will get this 40 instead of correct ans which is 31.4159
    double r = 5;
    double circumfrace = 2 * pi * r ;
    std::cout << circumfrace << std::endl;

    // now to avoid that we use const that will kind of lock the int or datatype and we can't declare that twice or more
    // like this-
    const int DaysOfWeek = 7;
    /*
    if we now type
    DaysOfWeek = 8;
    it will give an error
    */
    std::cout << "The week has" << DaysOfWeek << std::endl;



    return 0;
}
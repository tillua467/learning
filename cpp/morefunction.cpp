#include <iostream>
#include <cmath> // so add this

int main(){

    // tIME TO LEARN soem use ful math function

    double x = 3;
    double y = 4;
    double z, a, b, c, d, e, f, g;
    // let's say we want to compare two number and see which one is bigger so we use max
    // like this
    z = std::max(x, y);

    std::cout << z << std::endl;
    // if we want which number is smaller then use min() function

    a = std::min(x, y);
    std::cout << a << std::endl;

    // now for other function we need a new lib to import called cmath

    b = pow(2, 3); // this works like 2^3
    std::cout << b << std::endl;

    c = sqrt(9); // it works as square root
    d = abs(-3); // abs means absoulute value that conv -1 to +1
    e = round(5.3287568); // Round to nearest Round up value
    f = ceil(3.4347); // 	Round down value
    g = floor(2.349); //Round to nearest

    // more at https://cplusplus.com/reference/cmath/

    return 0;
}
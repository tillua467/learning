#include <iostream>


int main(){

    // when talking about opreators we are talking about arithmetic opreation
    // like + - * /

    int ppl = 20;
    // but if one person joins then then total value will be

    ppl = ppl + 1;

    std::cout << ppl << std::endl;

    // but we can also use

    ppl+=1;

    std::cout << ppl << std::endl;

    // we can also add 2 3 or 4 and more just type +=2

    // but if we only ading 1 then we can use another things
    ppl++;
    // this will add one it will be used alot on loops that we will discuss later

    std::cout << ppl << std::endl;

    // also we can use that same thing for minus, multipication and subtraction with
    // same the way  but only plus and minus has
    // ppl++ and ppl--
    // also you can get reminder with % (modulas)
    // like this
    int p = 2;
    int q = p%p;
    std::cout << q << std::endl; // gives an ans of 0

    // also it's important to remmember that the code will math in a order of
    // parenthesis() > multiplucation & subtraction > addition & subtration
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    // let's make a nromal calc

    double a,b,c; // for numbers
    char S; // and for sign

    cout << "Hey There I Heard you want to calculate\n" << "some Numbers you can tell me" << endl;
    cout << "What's the first number? : ";
    cin >> a;
    cout << "What's the second number? : ";
    cin >> b;
    cout << "And the sign?: " ;
    cin >> S;

    switch(S){ // cases

    case '+':
    std::cout << "Oh ik the ans it's " << a+b << endl;
    break;
    case '-':
    std::cout << "Oh ik the ans it's " << a-b << endl;
    break;
    case '*':
    std::cout << "Oh ik the ans it's " << a*b << endl;
    break;
    case '/':
    std::cout << "Oh ik the ans it's " << a/b << endl;
    case 's':

    break;

    default:
    break;
    }


}
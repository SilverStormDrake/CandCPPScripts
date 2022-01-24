#include <iostream>

using namespace std;

int main(){

    int a, b, sum, sub, mult;
    double div;

    printf("Basic Calulator\n");
    cin >> a;
    cin >> b;

    sum = a+b;
    sub = a-b;
    mult = a*b;
    div = (double)a/b;

    printf("Sum: %i\n", sum);
    printf("Subtraction: %i\n", sub);
    printf("Multiplication: %i\n", mult);
    printf("Division = %f\n", div);

    return 0;
}
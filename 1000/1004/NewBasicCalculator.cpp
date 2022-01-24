#include <iostream>
#include <typeinfo>

using namespace std;

int main(){

    int a, b;
    double result;
    char op;

    printf("Basic Calulator\n");
    cin >> a;
    cin >> op;
    cin >> b;

    if(op == '+'){
        result = a+b;
    }else if(op == '-'){
        result = a-b;
    }else if(op == '*'){
        result = a*b;
    }else if(op == '/'){
        result = (double)a/b;
    }else{
        printf("Invalid Operator");
    }
    printf("%f", result);
    
    return 0;
}
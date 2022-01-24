#include <iostream>

using namespace std;

void example();
int Get3Max(int num1, int num2, int num3);
int Get2Max(int num1, int num2);

int main(){
    example();
    cout << Get3Max(3,7,2) << endl;
    return 0;
}

void example(){
    cout << "This is a function" << endl; 
}

int Get2Max(int num1, int num2){
    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}

int Get3Max(int num1, int num2, int num3){
    int Get2Max12 = Get2Max(num1, num2);
    int Get2Max13 = Get2Max(num1, num3);
    int Get2Max23 = Get2Max(num2, num3);
    
    if(Get2Max12 > num3){
        return Get2Max12;
    }else if(Get2Max13 > num2){
        return Get2Max13;
    }else if(Get2Max23 > num1){
        return Get2Max23;
    }else if(Get2Max12 < num3){
        return num3;
    }else if(Get2Max13 < num2){
        return num2;
    }else if(Get2Max23 < num1){
        return num1;
    }else{
        return num1;
    }
    
}
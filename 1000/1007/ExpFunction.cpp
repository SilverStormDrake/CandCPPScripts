#include <iostream>

using namespace std;

int exp(int b, int e){
    int r = 1;
    for(int i = 0; i <e ; i++){
        r *= b;
    }
    return r;
}


int main(){

    cout << exp(3,3) << endl;

    return 0;
}
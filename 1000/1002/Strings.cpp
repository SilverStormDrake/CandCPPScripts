#include <iostream>

using namespace std;

int main(){
    string CoolString = "Cool Text";
    cout << CoolString << endl;
    cout << "Length: " << CoolString.length() <<endl;
    cout << "Just a char: " << CoolString[3] <<endl; //Still am array
    cout << "Find: " << CoolString.find("Text", 0) <<endl; //0 is default
    cout << "Sub String: " << CoolString.substr(5, 4) <<endl;
}
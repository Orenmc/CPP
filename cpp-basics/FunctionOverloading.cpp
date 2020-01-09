#include <iostream>
#include <string>

using namespace std;
/**
 * change must be at least in one of:
 * 1. numbers of arguments
 * 2. type of argument
 * 
 * It's not posibble to overload by the return value!
*/
void print(int i){
    cout << "Here is int " << i << endl;
}
void print(double f){
    cout << "Here is float " << f << endl;
}
void print(string c){
    cout << "Here is string " << c << endl;
}

int main()
{
    print(10);
    print(10.0);
    print("ten");    
    return 0;
}
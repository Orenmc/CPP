#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *p = &x;    // pointer to x adress
    int &ref = x;   // ref
    
    ref = 20;       // change ref - and x & p also change
    cout << "x = " << x << endl;
    
    x = 30;         // change x - and ref & p also change
    cout << "ref = " << ref << endl;

    *p = 40;

    cout << "pointer = " << *p << endl;

    return 0;
}
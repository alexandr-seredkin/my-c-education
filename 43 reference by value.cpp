#include <iostream>

using namespace std;

void swapString(string &x, string &y);

int main()
{
    string x = "Kool-Aid";
    string y = "Water";

    swapString(x ,y);

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;

    return 0;
}

// & - memory address

void swapString(string &x, string &y){
    string temp;
    temp = x; 
    x = y; 
    y = temp; 
}
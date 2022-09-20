#include <iostream>
using namespace std;

int main(){
    cout << "Enter two integers \t";

    int a;
    cin >> a;

    int b;
    cin >> b;

    if(a>b)
        cout << a << "is large number";
    else
        cout << b << " is large number";

    return 0;
}2
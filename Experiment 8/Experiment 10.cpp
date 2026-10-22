#include <iostream>
using namespace std;
int main()
{
    int a, b, div;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    try
    {
        if(b==0)
        throw b;
        div = a / b;
        cout << "Division = " << div;
    }
    catch(int x)
    {
        cout<< "Cannot divide by zero";
        cout << "\nError number = " << x;
    }
    cout<<"\nAt the end of the program/main function" ;

    return 0;
}


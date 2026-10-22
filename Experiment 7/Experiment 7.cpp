#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }
    void accept()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imaginary = imaginary - c.imaginary;

        // Return the result
        return temp;
    }
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};


int main()
{
    Complex First;
    Complex Second;

    Complex Sum;
    Complex Difference;

    cout << "Enter first complex number:" << endl;
    First.accept();
    cout << "\nEnter second complex number:" << endl;
    Second.accept();
    Sum = First + Second;
    Difference = First - Second;
    cout << "\nFirst complex number: ";
    First.display();
    cout << "Second complex number: ";
    Second.display();
    cout << "\nAddition: ";
    Sum.display();
    cout << "Subtraction: ";
    Difference.display();

    return 0;
}

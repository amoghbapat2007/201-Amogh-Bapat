#include <iostream>
using namespace std;
template <class T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

template <class T>
class Sample
{
    T value;
public:
    
    Sample(T v)
    {
        value = v;
    }
    
    void display()
    {
        cout << "Value = " << value << endl;
    }
};
int main()
{
    int a, b, num;
    float x, y, decimal;
    
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Maximum Integer = " << maximum(a, b) << endl;
    
    cout << "Enter two decimal values: ";
    cin >> x >> y;
    cout << "Maximum Float = " << maximum(x, y) << endl;
    
    cout << "Enter an integer value: ";
    cin >> num;
    Sample<int> s1(num);
    s1.display();
    
    cout << "Enter a decimal value: ";
    cin >> decimal;
    Sample<float> s2(decimal);
    s2.display();

    return 0;
}

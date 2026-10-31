#include <iostream>
using namespace std;

namespace First
{
    void display()
    {
        cout << "Arithmetic namespace = 30" << endl;
    }
}

namespace Second
{
    void display()
    {
        cout << "Geometric namespace = Area of rectangle = 25" << endl;
    }
}

int main()
{
    First::display();
    Second::display();

    return 0;
}

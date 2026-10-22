#include <iostream>
using namespace std;
class Employee
{
protected:
    int emp_id;
    string name;
    int current_age;
public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> emp_id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Current Age: ";
        cin >> current_age;
    }
    void displayEmployee()
    {
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nEmployee Name: " << name;
        cout << "\nCurrent Age: " << current_age;
    }
};

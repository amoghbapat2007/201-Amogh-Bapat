#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    int emp_id;
    string name;
    int current_age;
    int retirement_age = 60;

public:
    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Current Age: ";
        cin >> current_age;
    }

    int getYearsToRetirement() {
        return retirement_age - current_age;
    }

    void displayEmployee() {
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nEmployee Name: " << name;
        cout << "\nCurrent Age: " << current_age;
        cout << "\nRetirement Age: " << retirement_age;
        
        int years_left = getYearsToRetirement();
        if (years_left > 0) {
            cout << "\nYears left until retirement: " << years_left << endl;
        } else if (years_left == 0) {
            cout << "\nEmployee is retiring this year!" << endl;
        } else {
            cout << "\nEmployee has already passed retirement age by " << -years_left << " year(s)." << endl;
        }
    }
};

int main() {
    Employee emp;
    emp.getEmployee();
    emp.displayEmployee();

    return 0;
}

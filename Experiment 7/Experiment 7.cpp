#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
    char *data;

public:
    MyString()
    {
        data = new char[1];
        data[0] = '\0';
    }

    
    MyString(const char *str)
    {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    
    MyString(const MyString &s)
    {
        data = new char[strlen(s.data) + 1];
        strcpy(data, s.data);
    }

    
    void accept()
    {
        char str[100];

        cout << "Enter a string: ";
        cin.getline(str, 100);

        delete[] data;
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    
    void display()
    {
        cout << data << endl;
    }

    
    ~MyString()
    {
        delete[] data;
    }
};

int main()
{
    MyString s1;
    s1.accept();
    cout << "String 1: ";
    s1.display();

    MyString s2("Hello World");
    cout << "String 2: ";
    s2.display();

    MyString s3(s2);
    cout << "String 3 (Copied): ";
    s3.display();

    return 0;
}

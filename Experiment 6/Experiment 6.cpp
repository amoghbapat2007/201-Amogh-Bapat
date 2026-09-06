#include <iostream>
using namespace std;
class Complex {
    float real, img;
    public:
    void accept(int r, int i) {
        real = r;
        img = i;
    }
     Complex operator + (Complex c) {
        Complex sum;
        sum.real = real + c.real;
        sum.img = img + c.img;
        return sum;
    }
    Complex operator - (Complex c) {
        Complex diff;
        diff.real = real - c.real;
        diff.img = img - c.img;
        return diff;
    }
     Complex operator * (Complex c) {
        Complex prod;
        prod.real = (real * c.real) - (img * c.img);
        prod.img = (real * c.img) + (img * c.real);
        return prod;
    }
    Complex operator / (Complex c) {
        Complex div;
        int denominator = (c.real * c.real) + (c.img * c.img);
        div.real = (real * c.real + img * c.img) / denominator;
        div.img = (img * c.real - real * c.img) / denominator;
        return div;
    }
      void display() {
        if(img>=0){
        cout << real << " + i" << img;
        }
        else{
        cout << real << " - i" << -img;
        }
    }
};

int main() {
    Complex c1, c2, c3, c4, c5, c6;
    c1.accept(3, -4);
    c2.accept(6, 10);
    cout << "First Complex Number: ";
    c1.display();
    cout << "\nSecond Complex Number: ";
    c2.display();
    c3=c1+c2;
    cout << "\nResult of Addition: ";
    c3.display();
    c4 = c1-c2;
    cout << "\nResult of Subtraction: ";
    c4.display();
    c5 = c1*c2;
    cout << "\nResult of Multiplication: ";
    c5.display();
    c6 = c1 / c2;
    cout << "\nResult of Division: ";
    c6.display();


    return 0;
}

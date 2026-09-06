#include<iostream>
using namespace std;
class complex{
    int real , img;
    public:
    void accept(int r , int i)
    {
        real=r ; img=i;
    }
    void display()
    {
        cout<<"\nThe complex number is:";
    if(img>=0)
    {
        cout<<real<<"+i"<<img;
    }
    else
    {
        cout<<real<<"-i"<<-img;
    }
    }
   void add(complex c1, complex c2)
   {
       real=c1.real + c2.real;
       img=c1.img + c2.img;
   }
   void sub(complex c1, complex c2)
   {
       real=c1.real - c2.real;
       img=c1.img - c2.img;
   }
   void mult(complex c1, complex c2)
   {
       real=c1.real*c2.real;
       img=c1.img*c2.img;
   }
   void divide(complex c1, complex c2)
   {
       real=c1.real%c2.real;
       img=c1.img%c2.img;
   }
   void dis()
   {
       cout<<real<<"+ i"<<-img;
   }
};
int main(){
    complex c1,c2,c3,c4,c5,c6;
    c1.accept(3,-5);
    c2.accept(9,20);
    c1.display();
    c2.display();
    c3.add(c1,c2);
    cout<<"\n Addition is:";
    c3.dis();
    c4.sub(c1,c2);
    cout<<"\n Subtraction is:";
    c4.dis();
    c5.mult(c1,c2);
    cout<<"\n Multiplication is:";
    c5.dis();
    c6.divide(c1,c2);
    cout<<"\n Division is:";
    c6.dis();
    return 0;
}

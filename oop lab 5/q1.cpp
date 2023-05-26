//Create a class complex which stores real and imaginary part of a complex number. 
//Include all types of constructors and destructor. 
//The destructor should display a message about the destructor being invoked.
//Create objects using different constructors and display them.
#include <iostream>
using namespace std;
class complex 
{
    int r, i;
  public:
    complex(int r2, int i2)
    {
        r=r2;
        i=i2;
    }
    complex()
    {
        r=4;
        i=1;
    }
    ~complex()
    {
        cout<<"Destructor has been invoked"<<endl;
    }
    void display()
    {
        cout << "The number is:\n";
        cout << r << "+" << i << "i" << endl;
    }
};
int main()
{
    complex c1;
    complex c2(7,8);
    complex c3(c1);
    c1.display();
    c2.display();
    c3.display();
}
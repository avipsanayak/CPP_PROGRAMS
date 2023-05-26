#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void get()
    {
        cin>>a;
    }
    void display()
    {
        cout<<"The value of 'a' is"<<a;
    }
};

class B: public A
{
    int b;
    cin>>b;
    b=b+a;    
    cout<<"In derived class"<<b;

};

int main()
{
    A a11;
    B b11;
    a11.
}
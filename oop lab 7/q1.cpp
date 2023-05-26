//WAP to demonstrate the order of call of constructors and destructors in case of multilevel inheritance.
#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"First: A class constructor"<<endl;
    } 
    ~A()
    {
        cout<<"Third: A class destructor"<<endl;
    }
};
class B:public A 
{
public:
    B()
    {
        cout<<"Second: B class constructor"<<endl;
    } 
    ~B()
    {
        cout<<"Second: B class destructor"<<endl;
    }
};
class C:public B
{
public:
    C()
    {
        cout<<"Third: C class constructor"<<endl;
    } 
    ~C()
    {
        cout<<"First: C class destructor"<<endl;
    }
};
int main()
{
    C obj;
    return 0;
}
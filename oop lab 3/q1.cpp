//WAP to swap private data member of two classes. [The classes have no relation with each other]
#include<iostream>
using namespace std;
class xyz;
class abc
{
private:
    int a;
public:
    void get()
    {
        cout<< "Enter a number:";
        cin>>a;
    }
    void display()
    {
        cout<<a;
    }
    friend void swap(abc&, xyz&);
    friend void display(abc&, xyz&);
};

class xyz
{
private:
    int x;
public:
    void get()
    {
        cout<< "Enter another number:";
        cin>>x;
    }
    void display()
    {
        cout<<x;
    }
    friend void swap(abc&, xyz&);
    friend void display(abc&, xyz&);
};
void swap(abc &a1, xyz &x1)
{
    int temp;
    temp=a1.a;
    a1.a=x1.x;
    x1.x=temp;    

}
void display(abc &a1, xyz &x1)
{
    cout<<a1.a<<x1.x;
}

int main()
{
   abc a11;
   xyz x11;
   a11.get();
   x11.get();
   swap( a11, x11);
   display( a11, x11);
}
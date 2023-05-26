//WAP to swap two integers using pass by reference.
#include <iostream>
using namespace std;
void swap(int &n1, int &n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}

int main()
{
    int a=10,b=45;
    cout<<"Before Swapping"<<"\na="<<a<<"\nb="<<b<<"\n";
    swap(a,b);
    cout<<"After Swapping"<<"\na="<<a<<"\nb="<<b;
    return 0;
}
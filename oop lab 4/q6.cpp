//WAP to increment the value of an argument given to function
#include <iostream>
using namespace std;
int incr(int x)
{
    return(++x);
}

int main()
{
    int n;
    cout<<"Enter the value";
    cin>>n;
    cout<< incr(n)<< endl;
    return 0;
}
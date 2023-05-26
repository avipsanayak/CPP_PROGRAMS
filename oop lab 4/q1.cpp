//WAP to find area of a circle, a rectangle and a triangle, using concept of function overloading.
#include <iostream>
using namespace std;
float area(int);
float area(int, int);
float area(float, float);
int main()
{
    int r,l,b;
    float b1,h1;
    cout<<"Enter the radius of a circle:";
    cin>>r;
    cout<<"Enter the length and breadth of a rectangle:";
    cin>>l>>b;
    cout<<"Enter the base and height of a triangle:";
    cin>>b1>>h1;
    cout<<"Area of circle is:"<<area(r)<<"\n";
    cout<<"Area of rectangle is:"<<area(l,b)<<"\n";
    cout<<"Area of triangle is:"<<area(b1, h1)<<"\n";
    return 0;
}
float area(int r)
{
    return(3.14*r*r);
}
float area(int l, int b)
{
    return(l*b);
}
float area(float b1, float h1)
{
    return((b1*h1)/2);
}
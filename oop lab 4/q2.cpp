//WAP to find volume of a sphere, a cylinder and a cuboid, using function overloading.
#include <iostream>
using namespace std;
float vol(int);
float vol(int, int);
float vol(float, float, float);
int main()
{
    int r,r1,h1;
    float l,b,h;
    cout<<"Enter the radius of the sphere:";
    cin>>r;
    cout<<"Enter the radius and height of the cylinder:";
    cin>>r1>>h1;
    cout<<"Enter the length, breadth and height of a cuboid:";
    cin>>l>>b>>h;
    cout<<"Volume of the Sphere is:"<<vol(r)<<"\n";
    cout<<"Volume of the Cylinder is:"<<vol(r1,h1)<<"\n";
    cout<<"Volume of the Cuboid is:"<<vol(l,b,h)<<"\n";
    return 0;
}
float vol(int r)
{
    return((1*3.14*r*r*r)/3);
}
float vol(int r1, int h1)
{
    return((3.14*r1*r1*h1)/3);
}
float vol(float l, float b, float h)
{
    return(l*b*h);
}
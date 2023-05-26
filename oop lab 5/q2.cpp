// Create a class which stores time in hh:mm format. Include all the constructors. 
// The parameterized constructor should initialize the minute value to zero, if it is not provided.
#include <iostream>
using namespace std;
class Time
{
    int h, m;
    public:
    Time()
    {
        h=4;
        m=45;
    }
    Time(int h1, int m1=0)
    { 
        h=h1;
        m=m1;
    }
    void display()
    {
        cout<<"The time is:"<<h<<":"<<m<<endl;
    }
};
int main()
{
    Time t1;
    Time t2(5);
    Time t3(t2);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}
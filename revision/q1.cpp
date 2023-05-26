//Write a program in C++ to print thee sum of the following series : S = 1 + 2 + 3 +.........+n using copy constructor and display the sum using inline function.
#include<iostream>
using namespace std;
class Series
{
        int num, i, sum;
    public:
        Series(int x)
        {
                num=x;
                sum=0;
        }
        void calculate();
        void display();
};
inline void Series::calculate()
{
        for(i=1; i<=num; i++)
        {
                sum=sum+i;
        }
}
inline void Series::display()
{
        cout<<"\n Value of the Series : "<<sum;
}
int main()
{
        int x;
        cout<<"Enter Value";
        cin>>x;

        Series sum(x);
        sum.calculate();
        sum.display();

        return 0;
}
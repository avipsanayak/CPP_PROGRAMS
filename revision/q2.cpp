//Q. Write a program in C++ to multiply two vectors (int and float) using class Templates.
#include <iostream>

using namespace std;
template <class L>
class vector{
    L a,b,c;
    public:
    void get()
    {
        cout<<"Enter the value for coeffiecients:";
        cin>>a>>b>>c;
    }
    void show(){
        cout<<a<<"i +"<<b<<"j +"<<c<<" k"<<endl;
    }
    L multiply(vector y){
        vector d;
        d.a=a*y.a;
        d.b=b*y.b;
        d.c=c*y.c;
        return (d.a+d.b+d.c);
    }
};
int main()
{
    vector<int> v1,v2;
    v1.get();
    v2.get();
    int dot1=v1.multiply(v2);
    cout<<dot1<<endl;
    vector<float> v3,v4;
    v3.get();v4.get();
    float dot2=v3.multiply(v4);
    cout<<dot2<<endl;
    return 0;
}
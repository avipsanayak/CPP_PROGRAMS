//Q.Write a program in C++ to concatenate two strings. Include all types of constructors.
#include<iostream>
#include<cstring>
using namespace std;

class Concat
{
    char* str;
    int length;
public:
    Concat()
    {
        length = 0;
        str = new char[length + 1];
    }
    Concat(char* st)
    {
        length = strlen(st);
        str = new char[length + 1];
        strcpy(str, st);
    }
    Concat(Concat& ob)
    {
        length = ob.length;
        str = ob.str;
    }

    void compute(Concat x11, Concat x22)
    {
        length = x11.length + x22.length;
        str = new char[length + 1];

        strcpy(str, x11.str);
        strcat(str, x22.str);
        cout << "Result : " << str << endl;
    }

};

int main()
{
    char str1[50], str2[50];
    cout << "Enter 1st String : ";
    cin >> str1;
    cout << "Enter 2nd String : ";
    cin >> str2;

    Concat ob1(str1);
    Concat ob2(str2);
    Concat ob3;
    ob3.compute(ob1, ob2);
}
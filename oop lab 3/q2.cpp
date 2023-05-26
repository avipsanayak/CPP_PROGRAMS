#include<iostream>
using namespace std;
class test
{
    int objNo;
    static int objCnt;
public:
    test()
    {
        objNo=++objCnt;
    }
    
}
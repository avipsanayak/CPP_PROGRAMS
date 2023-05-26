//Rewrite program 2 using class template
#include<iostream>
using namespace std;
template< class T1, class T2 >
void display( T1 x, T2 y ){
    cout << x << "\t" << y << endl;
}

int main(){
    float a = 18.3;
    int b = 27;
    display( a, b );
    display( b, a );
    return 0;
}
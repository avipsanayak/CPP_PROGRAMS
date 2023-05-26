//Write a program to add two objects of time class. Overload the operator ‘==’ to compare two objects and display whether they are equal or not.
//Overload the assignment opperator
#include <iostream>
#include <string>
using namespace std;
class Time {
public:
	Time() : t(clock()) {}
	bool operator==(const Time &T){
		return this->t == T.t;
	}
	time_t t;
};
int main() {
	Time T1;
	Time T2;
	cout << (T1 == T2);
}
//1. WAP to find sort an integer array and float array using function template.
#include<iostream>
using namespace std;
#define N 5
template <class T>
void sort(T a[], int size)
{
	for (int i = 0; i < size; i++)
		for (int j = i+1; j < size; j++)
			if (a[i] > a[j])
			{
				T temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}
int main()
{
	int int_arr[N];
	float float_arr[N];
	cout<<"Enter integer array elements:"<<endl;
	for (int i = 0; i < N; i++)
		cin>>int_arr[i];
	cout<<"Enter float array elements:"<<endl;
	for (int i = 0; i < N; i++)
		cin>>float_arr[i];
	sort(int_arr,N);
	sort(float_arr, N);
	cout<<"After sorting:"<<endl;
	for (int i = 0; i < N; i++)
		cout<<int_arr[i]<<", ";
	cout<<endl;
	for (int i = 0; i < N; i++)
		cout<<float_arr[i]<<", ";
	return 0;
}
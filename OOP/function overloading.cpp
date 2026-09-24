#include<iostream>
using namespace std;
int add(int a, int b)
{
	return a+b;
}
int add(int a, int b, int c)
{
	return a+b+c;
}
int main()
{
	cout<<"Sum of two numbers: "<<add(10,20);
	cout<<"\nSum of three numbers: "<<add(10,20,30);
	return 0;
}

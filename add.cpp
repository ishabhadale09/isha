#include<iostream>
using namespace std;
int add(int a,int b)
{
	cout<<a+b;
}
int multiply(int a, int b)
{
	cout<<"\n"<<a*b;
}
int main()
{
	int x,y,result;
	cout<<"\nEnter value for x: ";
	cin>>x;
	cout<<"\nEnter value for y: ";
	cin>>y;
	add(x,y);
	multiply(x,y);
}

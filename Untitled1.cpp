#include<iostream>
using namespace std;
int add(int a,int b)
{
	cout<<a+b;
}
int main()
{
	int x,y,result;
	cout<<"\nEnter value for x: ";
	cin>>x;
	cout<<"\nEnter value for y: ";
	cin>>y;
	add(x,y);
}

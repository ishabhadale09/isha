#include<iostream>
using namespace std;
int addition(int a,int b)
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
<<<<<<< HEAD
	addition(x,y);
=======
	add(x,y);
>>>>>>> c++
	multiply(x,y);
}

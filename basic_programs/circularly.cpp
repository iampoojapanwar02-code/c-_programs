/*
Write a program to input three variables  circularly shift the values....
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter a :";
	cin>>a;
	cout<<"Enter b :";
	cin>>b;
	cout<<"Enter c :";
	cin>>c;
	d=a;
	c=b;
	b=a;
	a=d;
	
	cout<<"Swapping the values "<<a <<"\n"<<b<<"\n"<<c;
	return 0;
	
	
}

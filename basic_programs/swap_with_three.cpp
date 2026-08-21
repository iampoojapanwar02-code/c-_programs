/*
Write a program two values and two variable and swap the values with third variable print the swap the values....
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a :";
	cin>>a;
	cout<<"Enter b :";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"Swapping the values "<<a <<"\n"<<b;
	return 0;
	
	
}

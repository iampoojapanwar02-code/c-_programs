/*
Write a program two values and two variable and swap the values without using  third variable print the swap the values....
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter a :";
	cin>>a;
	cout<<"Enter b :";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"Swapping the values "<<a <<"\n"<<b;
	return 0;
	
	
}

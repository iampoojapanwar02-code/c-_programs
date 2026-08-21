/*
Write a program to input rate and quantity of item and also input discount and print gross bill and net bill.....
*/
#include<iostream>
using namespace std;
int main()
{
	int rate,quantity;
	float discount_percent,discount_amount,gross,net_bill;
	cout<<"Enter rate of item: ";
	cin>>rate;
	cout<<"Enter quantity of item: ";
	cin>>quantity;
	cout<<"Enter discount_percent of item: ";
	cin>>discount_percent;
	gross=rate*quantity;
	discount_amount=gross*discount_percent/100;
	net_bill=gross-discount_amount;
	cout<<"Gross Bill is "<< gross;
	cout<<"\n Discount amount is "<< discount_amount;
	cout<<"\n Net bill is "<< net_bill;
	return 0;
	
}

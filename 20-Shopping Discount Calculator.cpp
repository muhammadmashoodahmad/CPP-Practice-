#include<iostream>
using namespace std;
int main()
{
	double price;
	double discount;
	double final_price;
	cout<<"Enter Shopping Amount:";
	cin>>price;
	if(price<0)
	{
		cout<<"Invalid Amount";
	}
	else if(price>=10000)
	{
		discount=price*20/100;
		final_price=price-discount;
		cout<<"Discount = "<<discount<<endl;
		cout<<"Final Price = "<<final_price;
	}
	else
	{
		cout<<"No Discount"<<endl;
		cout<<"Final Price = "<<price<<endl;
	}
	return 0;
}

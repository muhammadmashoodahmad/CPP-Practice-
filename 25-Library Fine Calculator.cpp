#include<iostream>
using namespace std;
int main()
{
	int days;
	int fine;
	cout<<"Enter late days:";
	cin>>days;
	if(days<0)
	{
		cout<<"Invalid Days"<<endl;
	}
	else if(days<=5)
	{
		fine=days*10;
		cout<<"Library Fine Rs."<<fine<<endl;
	}
	else if(days<=10)
	{
		fine=(5*10)+((days-5)*20);
		cout<<"Library Fine Rs."<<fine<<endl;
	}
	else
	{
		fine=(5*10)+(5*20)+((days-10)*50);
		cout<<"Library Fine Rs."<<fine<<endl;
	}
	return 0;
}

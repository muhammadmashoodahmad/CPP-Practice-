#include<iostream>
using namespace std;
int main()
{
	string password;
	int length;
	cout<<"Enter a Password:";
	cin>>password;
	length==password.length();
	if(length==0)
	{
		cout<<"Invalid Password"<<endl;
	}
	else if(length<=4)
	{
		cout<<"Weak Password"<<endl;
	}
	else if(length<=8)
	{
		cout<<"Medium Password"<<endl;
	}
	else
	{
		cout<<"Strong Password"<<endl;
	}
	return 0;
}

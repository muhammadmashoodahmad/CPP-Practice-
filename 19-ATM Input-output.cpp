#include<iostream>
using namespace std;
int main()
{
	int a;
	int b=50000;
	int d=1000;
	cout<<"Enter Amount:";
	cin>>a;
	if(b>a)
	{
		if(a%100==0)
		{
			cout<<a<<".Rs"<<endl;
		}
		else
		{
			cout<<"Not Possible"<<endl;
		}
	}
	else 
	{
		cout<<"Not Match Your Balance:"<<endl;
	}
	return 0;
}

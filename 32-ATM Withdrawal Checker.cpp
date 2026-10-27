#include<iostream>
using namespace std;
int main()
{
	int amount,remaining;
	cout<<"Enter The Amount:";
	cin>>amount;
	if(amount<=50000)
	{
		if(amount%100==0)
		{
		  cout<<"Withdrawal Amount:"<<amount<<endl;
		  remaining=50000-amount;
		  cout<<"Remaining Amount:"<<remaining<<endl;
	    }
	    else
	    {
	    	cout<<"Invalid Amount";
		}
	}
	else
	{
		cout<<"Insufficient Balance";
	}
	return 0;
}

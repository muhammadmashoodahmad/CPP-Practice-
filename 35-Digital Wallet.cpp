#include<iostream>
using namespace std;
int main()
{
	int balance=5000;
	int choice;
	int amount;
	
	cout<<"=======Digital Wallet======"<<endl;
	cout<<"Availavle Balance: Rs. "<<balance<<endl;
	cout<<"1. Deposit Money"<<endl;
	cout<<"2. Withdraw Money"<<endl;
	cout<<"Enter your choice:";
	cin>>choice;
	cout<<"Enter Amount:";
	cin>>amount;
	
	if(amount<=0)
	{
		cout<<"Invalid Amount"<<endl;
	}
	else if(choice==1)
	{
		balance=balance+amount;
		cout<<"Deposit Successful"<<endl;
		cout<<"New Balance: Rs. "<<balance<<endl;
	}
	else if(choice==2)
	{
		if(amount<=balance)
		{
		balance=balance-amount;
		cout<<"Withdrawal Successful"<<endl;
		cout<<"Remaining Balance: Rs. "<<balance<<endl;
	    }
	    else
	    {
		cout<<"Insufficient Balance"<<endl;
	    }
    } 
   else
   {
   	cout<<"Invalid Choice"<<endl;
   }
   return 0;
}

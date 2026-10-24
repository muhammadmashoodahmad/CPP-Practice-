#include<iostream>
using namespace std;
int main()
{
	int pin;
	int attempts=0;
	int correctPin=1234;
	bool logged_In=false;
	while(attempts<3)
	{
		cout<<"Enter PIN:";
		cin>>pin;
		attempts++;
		if(pin==correctPin)
		{
			logged_In=true;
			break;
		}
		else
		{
			cout<<"Incorrect PIN:";
		}
	}
	if(logged_In==true)
	{
		cout<<"Login Successful"<<endl;
	}
	else
	{
		cout<<"Amount Locked"<<endl;
	}
	return 0;
}

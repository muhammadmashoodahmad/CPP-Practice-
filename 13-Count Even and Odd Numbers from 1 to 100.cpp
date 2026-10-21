#include<iostream>
using namespace std;
int main()
{
	int even=0;
	int odd=0;
	for(int i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	cout<<"Even Number = "<<even<<endl;
	cout<<"Odd Number = "<<odd<<endl;
	return 0;
}

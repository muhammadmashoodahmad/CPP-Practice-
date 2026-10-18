#include<iostream>
using namespace std;
int main()
{
	int number,digit;
	int even_count=0,odd_count=0;
	cout<<"Enter a number:";
	cin>>number;
	while(number!=0)
	{
		digit=number%10;
		if(digit%2==0)
		{
			even_count++;
		}
		else
		{
			odd_count++;
		}
		number=number/10;
	}
	cout<<"Even digits:"<<even_count<<endl;
	cout<<"Odd digits:"<<odd_count<<endl;
	return 0;
}

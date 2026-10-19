#include<iostream>
using namespace std;
int main()
{
	int number,digit;
	int count=0;
	cout<<"Enter a number:";
	cin>>number;
	while(number!=0)
	{
		digit=number%10;
		if(digit==0)
		{
			count++;
		}
		number=number/10;
	}
	cout<<"Total zeros:"<<count<<endl;
	return 0;
}

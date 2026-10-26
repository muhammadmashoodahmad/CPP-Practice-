#include<iostream>
using namespace std;
int main()
{
	int number;
	int remainder;
	int binary=0;
	int place=1;
	
	cout<<"Enter a decimal number:";
	cin>>number;
	
	      if (number<0)
	      {
	      	cout<<"Enter a Non-negative number"<<endl;
	      	return 0;
		  }
	if(number==0)
	{
		cout<<"Enter Number: 0"<<endl;
		return 0;
	}
	      while(number>0)
	      {
	      	remainder=number%2;
	      	binary=binary+(remainder*place);
	      	place=place*10;
	      	number=number/2;
		  }
	cout<<"Binary Number:"<<binary<<endl;
	return 0;
}

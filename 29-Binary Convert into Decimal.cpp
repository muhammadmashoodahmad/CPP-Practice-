#include<iostream>
using namespace std;
int main()
{
	int number;
	int digit;
	int count=0;
	int remainder;
	
	cout<<"Enter a number:";
	cin>>number;
	cout<<"Enter digit to find:";
	cin>>digit;
	
	    if(number<0||digit<0||digit>9)
	    {
	    	cout<<"Invalid Input"<<endl;
		}
		else
		{
			 while(number>0)
			{
		     	remainder=number%10;
			      	
			      	if(remainder==digit)
			      	{
			      		count++;
					}
			    number=number/10;
		    }
	    cout<<"Digit Appears :"<<count<<" Times"<<endl;
		}
    return 0;
}

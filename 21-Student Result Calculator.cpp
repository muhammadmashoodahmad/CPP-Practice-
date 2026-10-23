#include<iostream>
using namespace std;
int main()
{
	int eng,math,com;
	int total;
	double percentage;
	cout<<"Enter English Marks ( out of 100 ): ";
	cin>>eng;
	cout<<"Enter Math Marks ( out of 100 ): ";
	cin>>math;
	cout<<"Enter Computer Marks ( out of 100 ): ";
	cin>>com;
	
	if(eng<0||eng>100||math<0||math>100||com<0||com>100)
	{
		cout<<"Invalid Marks";
	}
	else
	{
		total=eng+math+com;
		percentage=total/3.0;
		cout<<"Total Marks = "<<total<<"/300"<<endl;
		cout<<"Percentage = "<<percentage<<"%"<<endl;
		
		if(eng<40||math<40||com<40)
		{
			cout<<"Result = Fail";
		}
		else if(percentage>=80)
		{
			cout<<"Grade A";
		}
		else if(percentage>=70)
		{
			cout<<"Grade B";
		}
		else if(percentage>=60)
		{
			cout<<"Grade C";
		}
		else
		{
			cout<<"Grade D";
		}
	}
	return 0;
}

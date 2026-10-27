#include<iostream>
using namespace std;
int main()
{
	int total_minutes;
	int hours;
	int remaining_minutes;
	
	cout<<"Enter Total Time in Minutes:";
	cin>>total_minutes;
	hours=total_minutes/60;
	remaining_minutes=total_minutes%60;
	cout<<"Total Time In Hours:"<<hours<<":"<<remaining_minutes<<endl;
	return 0;
}

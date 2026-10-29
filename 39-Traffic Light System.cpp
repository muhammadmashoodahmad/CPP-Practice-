#include<iostream>
using namespace std;
int main()
{
	int light;
	cout<<"Traffic Light System"<<endl;
	cout<<"1. Red "<<endl;
	cout<<"2. Yellow "<<endl;
	cout<<"3. Green "<<endl;
	
	cout<<"Enter your choice:";
	cin>>light;
	
	switch(light)
	{
		case 1:
			cout<<"STOP";
			break;
		case 2:
			cout<<"GET READY";
			break;
		case 3:
			cout<<"GO";
			break;
		default:
			cout<<"Invalid Choice";
	}
	return 0;
}

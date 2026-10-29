#include<iostream>
using namespace std;
int main()
{
	int choice;
	int total_seats=10;
	int booked_seats=0;
	
	while(true)
	{
		cout<<"\n=====Bus Seats Reservation======"<<endl;
		cout<<"1. Book a Seat"<<endl;
		cout<<"2. check Available Seats"<<endl;
		cout<<"3. Exit"<<endl;
		
		cout<<"Enter your choicie:";
		cin>>choice;
	if(choice==1)
	{
		if(booked_seats<total_seats)
		{
			booked_seats++;
			cout<<"Seat Booked Successfully"<<endl;
		}
		else
		{
			cout<<"No Seats Available"<<endl;
		}
	}
	else if(choice==2)
	{
		cout<<"Available Seats:"<<total_seats-booked_seats<<endl;
	}
	else if(choice==3)
	{
		cout<<"Thank You "<<endl;
		break;
	}
	else
	{
		cout<<"Invalid Choice"<<endl;
	}
	}
	return 0;
}

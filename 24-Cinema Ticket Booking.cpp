#include<iostream>
using namespace std;
int main()
{
	int choice;
	int quantity;
	int price;
	int total;
	cout<<"=====Cinema Ticket Booking===="<<endl;
	cout<<"1. Standard Ticket-Rs.300"<<endl;
	cout<<"2. Premium Ticket-Rs.500"<<endl;
	cout<<"3. VIP Ticket-Rs.1000"<<endl;
	cout<<"Enter your choice:";
	cin>>choice;
     	switch(choice)
     	{
     		case 1:
     		price=300;
     		break;
     		        case 2:
     		        price=500;
     		        break;
     		case 3:
     		price=1000;
     		break;
     		
     		default:
     			cout<<"Invalid Choice"<<endl;
     			return 0;
		}
		
		cout<<"Enter Numbers of Tickets:";
		cin>>quantity;
		    if(quantity<=0)
		    {
		    	cout<<"Invalid Quantity"<<endl;
			}
			else
			{
				total=price*quantity;
				cout<<"Total Bill: Rs."<<total<<endl;
			}
	return 0;
}

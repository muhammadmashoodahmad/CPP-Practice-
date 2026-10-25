#include<iostream>
using namespace std;
int main()
{
	int choice;
	int quantity;
	int price;
	int total;
	cout<<"1. Daily Package-Rs.100"<<endl;
	cout<<"2. Weekly Package-Rs.500"<<endl;
	cout<<"3. Monthly Package-Rs.1500"<<endl;
	
            cout<<"Select Package:";
            cin>>choice;
    switch(choice)
    {
    	case 1:
    	price=100;
    	break;
    	            case 2:
    	            price=500;
    	            break;
    	case 3:
    	price=1500;
    	break;
    	
    	
    	default:
    		cout<<"Invalid Choice"<<endl;
    	return 0;
	}
	
	cout<<"Enter Quantity:";
	cin>>quantity;
	
	if(quantity<=0)
	{
		cout<<"Invalid Quantity"<<endl;
	}
	else
	{
		total=price*quantity;
		cout<<"Total Price Rs."<<total<<endl;
	}
	return 0;
}

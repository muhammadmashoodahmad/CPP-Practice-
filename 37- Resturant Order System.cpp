#include<iostream>
using namespace std;
int main()
{
	int choice;
	int total=0;
	
	do
	{
		cout<<"\n======Resturant Menu======"<<endl;
		cout<<"1. Burger-Rs.350"<<endl;
		cout<<"2. Pizza-Rs.800"<<endl;
		cout<<"3. Fries-Rs.200"<<endl;
		cout<<"4. Checkout"<<endl;
		
		cout<<"Enter your choice:";
		cin>>choice;
		
	switch(choice)
	{
		case 1:
			total=total+350;
			cout<<"Burger Added"<<endl;
			break;
		case 2:
			total=total+800;
			cout<<"Pizza Added"<<endl;
			break;
		case 3:
			total=total+200;
			cout<<"Fries Added"<<endl;
			break;
		case 4:
			cout<<"Checkout Selected"<<endl;
			break;
		default:
			cout<<"Invalid Choice"<<endl;
	}
	}
	while(choice!=4);
	cout<<"Total Bill: Rs."<<total<<endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int hours;
	int fee;
	cout<<"Enter Parking Hours:";
	cin>>hours;
	     if(hours<=0)
	     {
	     	cout<<"Invalid Hours"<<endl;
		 }
		 else if(hours<=2)
		 {
            fee=hours*50;
            cout<<"Parking Fee: Rs."<<fee<<endl;
		 }
		 else if(hours<=5)
		 {
		 	fee=(2*50)+((hours-2)*40);
		 	cout<<"Parking Fee: Rs."<<fee<<endl;
		 }
		 else
		 {
		 	fee=(2*50)+(3*40)+((hours-5)*30);
		 	cout<<"Parking Fee: Rs."<<fee<<endl;
		 }
		 return 0;
}

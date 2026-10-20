#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter a number:";
	cin>>number;
	for(int i=2;i<=number;i=i+2)
	{
		cout<<i<<",";
	}
	cout<<endl;
	return 0;
}

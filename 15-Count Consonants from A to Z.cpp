#include<iostream>
using namespace std;
int main()
{
	int count=0;
	for(char ch='A';ch<='Z';ch++)
	{
		if(ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U')
		{
			count++;
		}
	}
	cout<<"Consonants = "<<count;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	for(char ch='A';ch<='Z';ch++)
	{
		if(ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U')
		{
			cout<<ch<<" ";
		}
	}
	return 0;
}

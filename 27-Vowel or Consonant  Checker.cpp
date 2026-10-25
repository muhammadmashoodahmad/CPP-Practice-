#include<iostream>
using namespace std;
int main()
{
	char letter;
	cout<<"Enter an English Letter:";
	cin>>letter;
	switch(letter)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		cout<<"Vowel"<<endl;
		break;
		default:
			if((letter>='a' && letter<='z')||(letter>='A' && letter<='Z'))
			{
				cout<<"Consonant"<<endl;
			}
			else
			{
				cout<<"Invalid Input"<<endl;
			}
	}
	return 0;
}

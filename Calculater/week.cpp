#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter ch";
	cin>>ch;
	switch(ch)
	{
		case 's':
			cout<<"sonday";
			break;
		case 'm':
			cout<<"monday";
			break;
		case 't':
			cout<<"tuesday";
			break;
		case 'w':
			cout<<"wednesday";
			break;
		case 'f':
			cout<<"friday";
			break;
		default:
			cout<<"False";
	}
}
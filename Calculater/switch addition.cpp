#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter value of  a and b";
	cin>>a>>b;
	char ch;
	cout<<"enter operator";
	cin>>ch;
	switch(ch)
	{
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		default:
			cout<<"not valide";
	}
}
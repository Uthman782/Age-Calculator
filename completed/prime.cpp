#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

bool isprime(int n, int i = 2){
	if (n <= 2)
	return (n==2) ? true: false;
	if (n%i==0)
	return false;
	if (i * i > n)
	return true;
	
	return isprime(n, i+1);
	}
int main(){
	int n;
	cout<<"Enter Any Number: ";
	cin>>n;
	if(isprime(n))
		cout<<"Yes, Number is Prime Number.";
	else
		cout<<"No, Number is Not Prime Number.";
		
	return 0;
}
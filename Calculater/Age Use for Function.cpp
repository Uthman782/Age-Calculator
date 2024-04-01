# include <iostream>
using namespace std;
//	int yeari, munthi, dayi;
int age(int x,int y,int z){
	cout<<"Enter Your Date of borth:........"<<endl;
	cout<<"Enter year: ";
	cin>>x;
	if(x<2000){
		cout<<"Sorry the value is incorract please corract the value first...";
		return 2000;
	}
	else if(x>2023){
		cout<<"The value is very big we never calculat this value sorry...";
		return 2023;
	}
	else{
		cout<<"Continue"<<endl;
	}
	cout<<"Enter munth: ";
	cin>>y;
	if(y<1){
		cout<<"Sorry your are wrong this is munth...";
		return 1;
	}
	else if(y>12){
		cout<<"Sorry this is munth you enter "<<y<<" munth";
		return 12;
	}
	else{
		cout<<"Continue"<<endl;
	}
	cout<<"Enter date: ";
	cin>>z;
		if(z<1){
		cout<<"The value you enter is "<<z<<" date..";
		return 1;
	}
	else if(z>31){
		cout<<"The value you enter is "<<z<<" date..";
		return 31;
	}
	else{
		cout<<"Continue"<<endl;
	}
}
int main(){

//	Enter Your Date of borth here now...........................

//	Enter new Date here now......................................
	int yearf, munthf, dayf;
	cout<<"Enter new Date:........"<<endl;
	cout<<"Enter year: ";
	cin>>yearf;
		if(yearf<2000){
		cout<<"Sorry the value is incorract please corract the value first...";
		return 2000;
	}
	else if(yearf>2023){
		cout<<"The value is very big we never calculat this value sorry...";
		return 2023;
	}
	else{
		cout<<"Continue"<<endl;
	}
	cout<<"Enter munth: ";
	cin>>munthf;
		if(munthf<1){
		cout<<"Sorry your are wrong this is munth...";
		return 1;
	}
	else if(munthf>12){
		cout<<"Sorry this is munth you enter "<<munthf<<" munth";
		return 12;
	}
	else{
		cout<<"Continue"<<endl;
	}
	cout<<"Enter date: ";
	cin>>dayf;
	if(dayf<1){
		cout<<"The value you enter is "<<dayf<<" date..";
		return 1;
	}
	else if(dayf>31){
		cout<<"The value you enter is "<<dayf<<" date..";
		return 31;
	}
	else{
		cout<<"Continue"<<endl;
	}
	//Calculation..................................................
	float year = 365.25, munth = 30.4375;
	float netmunth = (munthf - munthi)*munth;
	
	cout<<"Net Year: "<<netmunth;
	return 0;
}

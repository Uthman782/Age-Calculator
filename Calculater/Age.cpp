# include <iostream>
using namespace std;

int main(){
	int yeari, munthi, dayi;
//	Enter Your Date of borth here now...........................
	cout<<"Enter Your Date of borth:........"<<endl;
	cout<<"Enter year: ";
	cin>>yeari;
	if(yeari<2000){
		cout<<"Sorry the value is incorract please corract the value first...";
		return 2000;
	}
	else if(yeari>2023){
		cout<<"The value is very big we never calculat this value sorry...";
		return 2023;
	}
	else{
		cout<<"Continue"<<endl;
	}
	cout<<"Enter munth: ";
	cin>>munthi;
	if(munthi<1){
		cout<<"Sorry your are wrong this is munth...";
		return 1;
	}
	else if(munthi>12){
		cout<<"Sorry this is munth you enter "<<munthi<<" munth";
		return 12;
	}
	else{
		cout<<"Continue"<<endl;
	}
	cout<<"Enter date: ";
	cin>>dayi;
		if(dayi<1){
		cout<<"The value you enter is "<<dayi<<" date..";
		return 1;
	}
	else if(dayi>31){
		cout<<"The value you enter is "<<dayi<<" date..";
		return 31;
	}
	else{
		cout<<"Continue"<<endl;
	}
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
	float year = 365.25, munth = 30.4375 , deffrence_of_year = (yearf-yeari)*year;
	float deffrence_of_munth = (munthf - munthi)*munth;
	float deffrence_of_day = dayf-dayi;
	float net_days = deffrence_of_year+deffrence_of_munth+deffrence_of_day;
	
	float net_years = net_days/year;
	cout<<"Net Year of your Age is   : "<<net_years<<endl;
	float net_munths = net_days/munth;
	cout<<"Net Munths of your Age is : "<<net_munths<<endl;
	float net_weeks = net_days/7;
	cout<<"Net Weeks of your age is  : "<<net_weeks<<endl;
	cout<<"Net Days of your Age is   : "<<net_days;
	return 0;
}

#include<iostream>
using namespace std;

void checking_day(int year,int month,int day){
			if (day > 31)
			{
				cout<<"Sorry your are wrong date are never "<<day<<". I never saw.";
				exit(0);
			}
			else if (year%4 == 0 && month == 2 && day > 29){
				cout<<"Your are wrong on "<<year<<" in "<<month << " Month. date is never greater then 29";
				exit(0);
			}
			else if (!(year%4 == 0) && month == 2 && day > 28){
				cout<<"Your are wrong on "<<year<<" in "<<month << " Month. date is never greater then 28";
				exit(0);
			}
			else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day>30)){
				cout<<"Your are wrong in "<<month<<" month date is never greater then 30.";
				exit(0);
			}
			else{
				cout<<"Continue"<<endl;
			}
		}
int main(){
	while(true){
     int a ,b,c;
     cout<<"Enter the year:  ";
     cin>>a;
     cout<<"Enter The Month: ";
     cin>>b;
     cout<<"Enter The Date: ";
     cin>>c;
    // if (a%b==0)
    // {
    //    cout<<"Your are True >>>?";
    // }
    // else{
    //    cout<<"Your are false >>>?";

    // }
    checking_day(a,b,c);
    cout<<endl;
}

return 0;
}

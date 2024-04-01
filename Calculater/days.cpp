#include<iostream>
using namespace std;
//int da; If we only include this global varible then it does not work because the local varible does not include in this funcation..  	
void day(int days){
	switch(days){
		case 1:
			cout<<"Saturday";
		break;			
		case 2:
			cout<<"Sunday";
		break;						
		case 3:
			cout<<"Monday";
		break;			
		case 4:
			cout<<"Tuesday";
		break;			
		case 5:
			cout<<"Wednesday";
		break;			
		case 6:
			cout<<"Thursday";
		break;			
		case 7:
			cout<<"Friday";
		break;
		case 8:
			cout<<"Saturday";
		break;			
		case 9:
			cout<<"Sunday";
		break;						
		case 10:
			cout<<"Monday";
		break;			
		case 11:
			cout<<"Tuesday";
		break;			
		case 12:
			cout<<"Wednesday";
		break;			
		case 13:
			cout<<"Thursday";
		break;			
		case 14:
			cout<<"Friday";
		break;
		case 15:
			cout<<"Saturday";
		break;			
		case 16:
			cout<<"Sunday";
		break;						
		case 17:
			cout<<"Monday";
		break;			
		case 18:
			cout<<"Tuesday";
		break;			
		case 19:
			cout<<"Wednesday";
		break;			
		case 20:
			cout<<"Thursday";
		break;			
		case 21:
			cout<<"Friday";
		break;
		case 22:
			cout<<"Saturday";
		break;			
		case 23:
			cout<<"Sunday";
		break;						
		case 24:
			cout<<"Monday";
		break;			
		case 25:
			cout<<"Tuesday";
		break;			
		case 26:
			cout<<"Wednesday";
		break;			
		case 27:
			cout<<"Thursday";
		break;			
		case 28:
			cout<<"Friday";
		break;
		case 29:
			cout<<"Tuesday";
		break;			
		case 30:
			cout<<"Wednesday";
		break;			
		case 31:
			cout<<"Thursday";
		break;
		default:
			cout<<"What have you entered.. ";
	}
}
int main(){
	int days;
	cout<<"Enter the day: ";
	cin>>days;
	day(days);
	return 0;
}


#include <iostream>
using namespace std;
// this is parent class of two child classes..
class Age{
protected:
	int days;
	int month;
	int year;
	// this two function is define after the main() function --v
	void dayOfAge(void); //  this
	void months(void);	 // and this
public:
	friend void checking_day(int, int, int);
};
// this is first child class. Which are protecticaly inhareted form Age class(parent class).
class AgeOf_DateBirth : protected Age{
protected:
	int yearDB, monthDB, dayDB;

public:
	// this function is defined after main() function--
	void setDate_for_Age(void);
	void DisplayDateBirth(void){
		cout << "=======--------------------------------------->>> |  Month  |  days  | years " << endl;
		cout << "=======------Your Date Birth right here------->>> | ";
		this->months();
		cout << " | ";
		this->dayOfAge();
		cout << " | ";
		cout << this->year << endl;
		cout << "=======--------------------------------------->>> |    " << this->month << "    |    " << this->days << "   |   " << this->year << endl;
	}
};
// this is second child class. which are protecticaly inhareted from class Age
class AgeOf_NewDate : protected Age{
protected:
	int yearND, monthND, dayND;

public:
	// this function is defined after main() function--
	void set_NewDate_for_Age(void);
	void DisplayNewDate(void){
		cout << "=======--------------------------------------->>> |  Month  |  days  | years " << endl;
		cout << "=======--------Your New Date is here---------->>> | ";
		this->months();
		cout << " | ";
		this->dayOfAge();
		cout << " | ";
		cout << this->year << endl;
		cout << "=======--------------------------------------->>> |    " << this->month << "    |    " << this->days << "   |   " << this->year << endl;
	}
};
template <class Tem>
class fullAge : public AgeOf_DateBirth, public AgeOf_NewDate{
private:
	Tem fullDay;
	Tem fullMonth;
	Tem fullYear;
	Tem fullWeek;

public:
	void calculation(){
		float oneyear = 365.25, onemonth = 30.4375, deffrence_of_year = (yearND - yearDB) * oneyear;
		float deffrence_of_month = (monthND - monthDB) * onemonth;
		float deffrence_of_day = dayND - dayDB;
		float net_days = deffrence_of_year + deffrence_of_month + deffrence_of_day;
		this->fullDay = net_days;
		float net_years = net_days / oneyear;
		this->fullYear = net_years;
		float net_months = net_days / onemonth;
		this->fullMonth = net_months;
		float net_weeks = net_days / 7;
		this->fullWeek = net_weeks;
	}
	void DisplayAge(void){
		// cout << "Hello Mr." << name << "This is your Net Calculation: " << endl;
		cout << "==---->>> Net Year of your Age is   : " << fullYear << endl;
		cout << "==---->>> Net months of your Age is : " << fullMonth << endl;
		cout << "==---->>> Net Weeks of your Age is  : " << fullWeek << endl;
		cout << "==---->>> Net Days of your Age is   : " << fullDay;
	}
};
void callingFunction(void){
	fullAge<float> obj;
	obj.setDate_for_Age();
	obj.DisplayDateBirth();
	obj.set_NewDate_for_Age();
	obj.DisplayNewDate();
	obj.calculation();
	obj.DisplayAge();
}
int main(){
	int value;
	while (true){
		cout << "=====-------->>>> Press (1) for calling age function:" << endl;
		cout << "=====-------->>>> Press (0) for Exit this loop" << endl;
		cout << "==--->> Enter value (1) or (0) : ";
		cin >> value;
		switch (value){
		case 1:{
			callingFunction();
			cout << endl;
			break;
		}
		case 0:
			exit(1);

		default:
			cout << "\nPlease enter 1 and 0;" << endl;
			break;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
void checking_day(int year, int month, int day){
	if (day > 31){
		cout << "\aSorry your are wrong date never " << day << ". I never saw.";
		exit(0);
	}
	else if (year % 4 == 0 && month == 2 && day > 29){
		cout << "\aYour are wrong on " << year << " in " << month << " Month date is never greater then 29.";
		exit(0);
	}
	else if (!(year % 4 == 0) && month == 2 && day > 28){
		Age obj;
		obj.month = month;
		cout << "\aYour are wrong on " << year << " in ";
		obj.months();
		cout << " Month. Date is never greater than 28.";
		exit(0);
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30)){
		Age obj;
		obj.month = month;
		cout << "\aYour are wrong in ";
		obj.months();
		cout << " month. Date is never greater than 30.";
		exit(0);
	}
}
void AgeOf_DateBirth ::setDate_for_Age(void){
	int yeari, monthi, dayi;
	//	Enter Your Date of borth here now...........................
	cout << "Enter Your Date of Birth:" << endl;
	cout << "==--->> Enter year: ";
	cin >> yeari;
	// if (yeari < 1950)
	// {
	// 	cout << "Sorry but the value is less than 1970...You Enter " << yeari;
	// 	exit(0);
	// }
	if (yeari == 0){
		cout << "\aSorry But your are wrong here. Year is never Zero.\n It is start from one okay." << endl;
		exit(0);
	}
	else if (yeari >= 2023){
		cout << "\aThe value is greater than 2022.\nWe know that you are never Born in this year. " << yeari << "\nthis is not possible.";
		exit(0);
	}
	else{
		year = this->yearDB = yeari;
		for (int i = 0; i < 1; i++){
			cout << "======";
			for (int i = 0; i < 1; i++){
				for (int i = 0; i < 12; i++){
					cout << "--";
				}
				cout << ">>>> Successful !" << endl;
			}
		}
	}
	cout << "==--->> Enter month: ";
	cin >> monthi;
	if (monthi < 1){
		cout << "\aSorry your are wrong this is month...\n I Never saw that Month is (0)";
		exit(0);
	}
	else if (monthi > 12){
		cout << "\aSorry this is month you enter " << monthi << " month.\n You Know that Month is never greater than 12";
		exit(0);
	}
	else{
		month = this->monthDB = monthi;
		for (int i = 0; i < 1; i++){
			cout << "======";
			for (int i = 0; i < 1; i++){
				for (int i = 0; i < 12; i++){
					cout << "--";
				}
				cout << ">>>> Successful !" << endl;
			}
		}
	}
	cout << "==--->> Enter date: ";
	cin >> dayi;
	if (dayi < 1){
		cout << "\aThe value you enter is " << dayi << " date.. \n I never saw that date is 0";
		exit(0);
	}
	else if (dayi > 28){
		// This function check out that the enter value of date is Correct or wrong
		checking_day(yeari, monthi, dayi);
		days = this->dayDB = dayi;
		for (int i = 0; i < 1; i++){
			cout << "======";
			for (int i = 0; i < 1; i++){
				for (int i = 0; i < 12; i++){
					cout << "--";
				}
				cout << ">>>> Successful !" << endl;
			}
		}
	}
	else{
		days = this->dayDB = dayi;
		for (int i = 0; i < 1; i++){
			cout << "======";
			for (int i = 0; i < 1; i++){
				for (int i = 0; i < 12; i++){
					cout << "--";
				}
				cout << ">>>> Successful !" << endl;
			}
		}
	}
}
void AgeOf_NewDate::set_NewDate_for_Age(void){
	int yearf, monthf, dayf;
	cout << "Enter new Date:" << endl;
	cout << "==--->> Enter year: ";
	cin >> yearf;
	if (yearf < 2023){
		cout << "\aSorry the value is incorract please corract the value first...\n I know that this is 2023 ";
		exit(0);
	}
	else if (yearf > 2024){
		cout << "\aThe value is very big we have not calculate this value sorry...";
		exit(0);
	}
	else{
		year = this->yearND = yearf;
		for (int i = 0; i < 1; i++){
			cout << "======";
			for (int i = 0; i < 1; i++){
				for (int i = 0; i < 12; i++){
					cout << "--";
				}
				cout << ">>>> Successful !" << endl;
			}
		}
	}
	cout << "==--->> Enter month: ";
	cin >> monthf;
	if (monthf < 1){
		cout << "\aSorry your are wrong this is month...";
		exit(0);
	}
	else if (monthf > 12){
		cout << "\aSorry this is month your enter that month is " << monthf << ".";
		exit(0);
	}
	else{
		month = this->monthND = monthf;
		for (int i = 0; i < 1; i++){
			cout << "======";
			for (int i = 0; i < 1; i++){
				for (int i = 0; i < 12; i++){
					cout << "--";
				}
				cout << ">>>> Successful !" << endl;
			}
		}
	}
	cout << "==--->> Enter date: ";
	cin >> dayf;
	if (dayf < 1){
		cout << "\aThe value you enter is " << dayf << " date..";
		exit(0);
	}
	else if (dayf > 28){
		days = this->dayND = dayf;
		checking_day(yearf, monthf, dayf);
		for (int i = 0; i < 1; i++){
			cout << "======";
			for (int i = 0; i < 1; i++){
				for (int i = 0; i < 12; i++){
					cout << "--";
				}
				cout << ">>>> Successful !" << endl;
			}
		}
	}
	else{
		days = this->dayND = dayf;
		for (int i = 0; i < 1; i++){
			cout << "======";
			for (int i = 0; i < 1; i++){
				for (int i = 0; i < 12; i++){
					cout << "--";
				}
				cout << ">>>> Successful !" << endl;
			}
		}
	}
}
// Getting of Munth (e.g. January, February,......etc.)
void Age::months(){
	switch (month){
	case 1:
		cout << "January";
		break;
	case 2:
		cout << "February";
		break;
	case 3:
		cout << "March";
		break;
	case 4:
		cout << "April";
		break;
	case 5:
		cout << "May";
		break;
	case 6:
		cout << "June";
		break;
	case 7:
		cout << "July";
		break;
	case 8:
		cout << "August";
		break;
	case 9:
		cout << "September";
		break;
	case 10:
		cout << "October";
		break;
	case 11:
		cout << "November";
		break;
	case 12:
		cout << "December";
		break;
	default:
		cout << "What have you enter sorry..";
	}
}
// there are 28 month Functions which are
//  differe from each other. other wise all are same..

void sat_tus_31(int day){
	for (int i = 1; i <= 31; i++){
		if (day > 31){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 31){
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
		}
	}
}
void tus_wed_29(int day){
	for (int i = 1; i <= 29; i++){
		if (day > 29){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 29){
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
		}
	}
}
void fri_sat_29(int day){
	for (int i = 1; i <= 29; i++){
		if (day > 29){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 29){
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
		}
	}
}
void wed_sat_31(int day){
	for (int i = 1; i <= 31; i++){
		if (day > 31){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 31){
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
		}
	}
}
void sat_mon_30(int day){
	for (int i = 1; i <= 30; i++){
		if (day > 30){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 30){
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
		}
	}
}
void mon_thu_31(int day){
	for (int i = 1; i <= 31; i++){
		if (day > 31){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 31){
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
		}
	}
}
void thu_sat_30(int day){
	for (int i = 1; i <= 30; i++){
		if (day > 30){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 30){
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
		}
	}
}
void tus_fri_31(int day){
	for (int i = 1; i <= 31; i++){
		if (day > 31){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 31){
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
		}
	}
}
void fri_sun_30(int day){
	for (int i = 1; i <= 30; i++){
		if (day > 30){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 30){
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
		}
	}
}
void sun_wed_31(int day){
	for (int i = 1; i <= 31; i++){
		if (day > 31){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 31){
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
		}
	}
}
void wed_fri_30(int day){
	for (int i = 1; i <= 30; i++){
		if (day > 30){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 30){
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
		}
	}
}
void fri_mon_31(int day){
	for (int i = 1; i <= 31; i++){
		if (day > 31){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 31){
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
		}
	}
}
void thu_thu_28(int day){
	for (int i = 1; i <= 28; i++){
		if (day > 28){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 28){
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
		}
	}
}
void thu_sun_31(int day){
	for (int i = 1; i <= 31; i++){
		if (day > 31){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 31){
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
		}
	}
}
void sun_tus_30(int day){
	for (int i = 1; i <= 30; i++){
		if (day > 30){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 30){
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
		}
	}
}
void fri_fri_28(int day){
	for (int i = 1; i <= 28; i++){
		if (day > 28){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 28){
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
		}
	}
}
void mon_wed_30(int day){
	for (int i = 1; i <= 30; i++){
		if (day > 30){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 30){
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
		}
	}
}
void sat_sat_28(int day){
	for (int i = 1; i <= 28; i++){
		if (day > 28){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 28){
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
		}
	}
}
void tus_thu_30(int day){
	for (int i = 1; i <= 30; i++){
		if (day > 30){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 30){
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
		}
	}
}
void sun_mon_29(int day){
	for (int i = 1; i <= 29; i++){
		if (day > 29){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 29){
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
		}
	}
}
void tus_tus_28(int day){
	for (int i = 1; i <= 28; i++){
		if (day > 28){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 28){
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
		}
	}
}
void wed_wed_28(int day){
	for (int i = 1; i <= 28; i++){
		if (day > 28){
			cout << "What have you entered.. ";
			exit(0);
		}
		else if (day <= 28){
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
		}
	}
}
void sun_sun_28(int day){
	for (int i = 1; i <= 28; i++){
		if (day > 28){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 28){
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
		}
	}
}
void mon_mon_28(int day){
	for (int i = 1; i <= 28; i++){
		if (day > 28){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 28){
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
		}
	}
}
void wed_thu_29(int day){
	for (int i = 1; i <= 29; i++){
		if (day > 29){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 29){
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
		}
	}
}
void mon_tus_29(int day){
	for (int i = 1; i <= 29; i++){
		if (day > 29){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 29){
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
		}
	}
}
void sat_sun_29(int day){
	for (int i = 1; i <= 29; i++){
		if (day > 29){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 29){
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
		}
	}
}
void thu_fri_29(int day){
	for (int i = 1; i <= 29; i++){
		if (day > 29){
			cout << "What have you entered.. ";
			break;
		}
		else if (day <= 29){
			if (day == i){
				cout << "Thursday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Friday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Saturday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Sunday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Monday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Tuesday";
				break;
			}
			else{
				i++;
			}
			if (day == i){
				cout << "Wednesday";
				break;
			}
		}
	}
}
// Getting Days(e.g. sunday, monday, tuesday,......etc.)
void Age::dayOfAge(){
	for (int i = 0; i <= 2100; i++){
		if (year == i) // This is 2016 Year...............................
		{
			if (month == 1){
				fri_mon_31(days);
			}
			else if (month == 2){
				mon_tus_29(days);
			}
			else if (month == 3){
				tus_fri_31(days);
			}
			else if (month == 4){
				fri_sun_30(days);
			}
			else if (month == 5){
				sun_wed_31(days);
			}
			else if (month == 6){
				wed_fri_30(days);
			}
			else if (month == 7){
				fri_mon_31(days);
			}
			else if (month == 8){
				mon_thu_31(days);
			}
			else if (month == 9){
				thu_sat_30(days);
			}
			else if (month == 10){
				sat_tus_31(days);
			}
			else if (month == 11){
				tus_thu_30(days);
			}
			else if (month == 12){
				thu_sun_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2017 Year...............................
		{
			if (month == 1){
				sun_wed_31(days);
			}
			else if (month == 2){
				wed_wed_28(days);
			}
			else if (month == 3){
				wed_sat_31(days);
			}
			else if (month == 4){
				sat_mon_30(days);
			}
			else if (month == 5){
				mon_thu_31(days);
			}
			else if (month == 6){
				thu_sat_30(days);
			}
			else if (month == 7){
				sat_tus_31(days);
			}
			else if (month == 8){
				tus_fri_31(days);
			}
			else if (month == 9){
				fri_sun_30(days);
			}
			else if (month == 10){
				sun_wed_31(days);
			}
			else if (month == 11){
				wed_fri_30(days);
			}
			else if (month == 12){
				fri_mon_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2018 Year...............................
		{
			if (month == 1){
				mon_thu_31(days);
			}
			else if (month == 2){
				thu_thu_28(days);
			}
			else if (month == 3){
				thu_sun_31(days);
			}
			else if (month == 4){
				sun_tus_30(days);
			}
			else if (month == 5){
				tus_fri_31(days);
			}
			else if (month == 6){
				fri_sun_30(days);
			}
			else if (month == 7){
				sun_wed_31(days);
			}
			else if (month == 8){
				wed_sat_31(days);
			}
			else if (month == 9){
				sat_mon_30(days);
			}
			else if (month == 10){
				mon_thu_31(days);
			}
			else if (month == 11){
				thu_sat_30(days);
			}
			else if (month == 12){
				sat_tus_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2019 Year...............................
		{
			if (month == 1){
				tus_fri_31(days);
			}
			else if (month == 2){
				fri_fri_28(days);
			}
			else if (month == 3){
				fri_mon_31(days);
			}
			else if (month == 4){
				mon_wed_30(days);
			}
			else if (month == 5){
				wed_sat_31(days);
			}
			else if (month == 6){
				sat_mon_30(days);
			}
			else if (month == 7){
				mon_thu_31(days);
			}
			else if (month == 8){
				thu_sun_31(days);
			}
			else if (month == 9){
				sun_tus_30(days);
			}
			else if (month == 10){
				tus_fri_31(days);
			}
			else if (month == 11){
				fri_sun_30(days);
			}
			else if (month == 12){
				sun_wed_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2020 Year...............................
		{
			if (month == 1){
				wed_sat_31(days);
			}
			else if (month == 2){
				sat_sun_29(days);
			}
			else if (month == 3){
				sun_wed_31(days);
			}
			else if (month == 4){
				wed_fri_30(days);
			}
			else if (month == 5){
				fri_mon_31(days);
			}
			else if (month == 6){
				mon_wed_30(days);
			}
			else if (month == 7){
				wed_sat_31(days);
			}
			else if (month == 8){
				sat_tus_31(days);
			}
			else if (month == 9){
				tus_thu_30(days);
			}
			else if (month == 10){
				thu_sun_31(days);
			}
			else if (month == 11){
				sun_tus_30(days);
			}
			else if (month == 12){
				tus_fri_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2021 Year...............................
		{
			if (month == 1){
				fri_mon_31(days);
			}
			else if (month == 2){
				mon_mon_28(days);
			}
			else if (month == 3){
				mon_thu_31(days);
			}
			else if (month == 4){
				thu_sat_30(days);
			}
			else if (month == 5){
				sat_tus_31(days);
			}
			else if (month == 6){
				tus_thu_30(days);
			}
			else if (month == 7){
				thu_sun_31(days);
			}
			else if (month == 8){
				sun_wed_31(days);
			}
			else if (month == 9){
				wed_fri_30(days);
			}
			else if (month == 10){
				fri_mon_31(days);
			}
			else if (month == 11){
				mon_wed_30(days);
			}
			else if (month == 12){
				wed_sat_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2022 Year...............................
		{
			if (month == 1){
				sat_tus_31(days);
			}
			else if (month == 2){
				tus_tus_28(days);
			}
			else if (month == 3){
				tus_fri_31(days);
			}
			else if (month == 4){
				fri_sun_30(days);
			}
			else if (month == 5){
				sun_wed_31(days);
			}
			else if (month == 6){
				wed_fri_30(days);
			}
			else if (month == 7){
				fri_mon_31(days);
			}
			else if (month == 8){
				mon_thu_31(days);
			}
			else if (month == 9){
				thu_sat_30(days);
			}
			else if (month == 10){
				sat_tus_31(days);
			}
			else if (month == 11){
				tus_thu_30(days);
			}
			else if (month == 12){
				thu_sun_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2023 Year...............................
		{
			if (month == 1){
				sun_wed_31(days);
			}
			else if (month == 2){
				wed_wed_28(days);
			}
			else if (month == 3){
				wed_sat_31(days);
			}
			else if (month == 4){
				sat_mon_30(days);
			}
			else if (month == 5){
				mon_thu_31(days);
			}
			else if (month == 6){
				thu_sat_30(days);
			}
			else if (month == 7){
				sat_tus_31(days);
			}
			else if (month == 8){
				tus_fri_31(days);
			}
			else if (month == 9){
				fri_sun_30(days);
			}
			else if (month == 10){
				sun_wed_31(days);
			}
			else if (month == 11){
				wed_fri_30(days);
			}
			else if (month == 12){
				fri_mon_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2024 Year...............................
		{
			if (month == 1){
				mon_thu_31(days);
			}
			else if (month == 2){
				thu_fri_29(days);
			}
			else if (month == 3){
				fri_mon_31(days);
			}
			else if (month == 4){
				mon_wed_30(days);
			}
			else if (month == 5){
				wed_sat_31(days);
			}
			else if (month == 6){
				sat_mon_30(days);
			}
			else if (month == 7){
				mon_thu_31(days);
			}
			else if (month == 8){
				thu_sun_31(days);
			}
			else if (month == 9){
				sun_tus_30(days);
			}
			else if (month == 10){
				tus_fri_31(days);
			}
			else if (month == 11){
				fri_sun_30(days);
			}
			else if (month == 12){
				sun_wed_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2025 Year...............................
		{
			if (month == 1){
				wed_sat_31(days);
			}
			else if (month == 2){
				sat_sat_28(days);
			}
			else if (month == 3){
				sat_tus_31(days);
			}
			else if (month == 4){
				tus_thu_30(days);
			}
			else if (month == 5){
				thu_sun_31(days);
			}
			else if (month == 6){
				sun_tus_30(days);
			}
			else if (month == 7){
				tus_fri_31(days);
			}
			else if (month == 8){
				fri_mon_31(days);
			}
			else if (month == 9){
				mon_wed_30(days);
			}
			else if (month == 10){
				wed_sat_31(days);
			}
			else if (month == 11){
				sat_mon_30(days);
			}
			else if (month == 12){
				mon_thu_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i){ // This is 2026 Year...............................
			if (month == 1){
				thu_sun_31(days);
			}
			else if (month == 2){
				sun_sun_28(days);
			}
			else if (month == 3){
				sun_wed_31(days);
			}
			else if (month == 4){
				wed_fri_30(days);
			}
			else if (month == 5){
				fri_mon_31(days);
			}
			else if (month == 6){
				mon_wed_30(days);
			}
			else if (month == 7){
				wed_sat_31(days);
			}
			else if (month == 8){
				sat_tus_31(days);
			}
			else if (month == 9){
				tus_thu_30(days);
			}
			else if (month == 10){
				thu_sun_31(days);
			}
			else if (month == 11){
				sun_tus_30(days);
			}
			else if (month == 12){
				tus_fri_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i){ // This is 2027 Year...............................
			if (month == 1){
				fri_mon_31(days);
			}
			else if (month == 2){
				mon_mon_28(days);
			}
			else if (month == 3){
				mon_thu_31(days);
			}
			else if (month == 4){
				thu_sat_30(days);
			}
			else if (month == 5){
				sat_tus_31(days);
			}
			else if (month == 6){
				tus_thu_30(days);
			}
			else if (month == 7){
				thu_sun_31(days);
			}
			else if (month == 8){
				sun_wed_31(days);
			}
			else if (month == 9){
				wed_fri_30(days);
			}
			else if (month == 10){
			
				fri_mon_31(days);
			}
			else if (month == 11){
				mon_wed_30(days);
			}
			else if (month == 12){
				wed_sat_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2000 Year...............................
		{
			if (month == 1){
				sat_tus_31(days);
			}
			else if (month == 2){
				tus_wed_29(days);
			}
			else if (month == 3){
				wed_sat_31(days);
			}
			else if (month == 4){
				sat_mon_30(days);
			}
			else if (month == 5){
				mon_thu_31(days);
			}
			else if (month == 6){
				thu_sat_30(days);
			}
			else if (month == 7){
				sat_tus_31(days);
			}
			else if (month == 8){
				tus_fri_31(days);
			}
			else if (month == 9){
				fri_sun_30(days);
			}
			else if (month == 10){
				sun_wed_31(days);
			}
			else if (month == 11){
				wed_fri_30(days);
			}
			else if (month == 12){
				fri_mon_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2001 Year...............................
		{
			if (month == 1){
				mon_thu_31(days);
			}
			else if (month == 2){
				thu_thu_28(days);
			}
			else if (month == 3){
				thu_sun_31(days);
			}
			else if (month == 4){
				sun_tus_30(days);
			}
			else if (month == 5){
				tus_fri_31(days);
			}
			else if (month == 6){
				fri_sun_30(days);
			}
			else if (month == 7){
				sun_wed_31(days);
			}
			else if (month == 8){
				wed_sat_31(days);
			}
			else if (month == 9){
				sat_mon_30(days);
			}
			else if (month == 10){
				mon_thu_31(days);
			}
			else if (month == 11){
				thu_sat_30(days);
			}
			else if (month == 12){
				sat_tus_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2002 Year...............................
		{
			if (month == 1){
				tus_fri_31(days);
			}
			else if (month == 2){
				fri_fri_28(days);
			}
			else if (month == 3){
				fri_mon_31(days);
			}
			else if (month == 4){
				mon_wed_30(days);
			}
			else if (month == 5){
				wed_sat_31(days);
			}
			else if (month == 6){
				sat_mon_30(days);
			}
			else if (month == 7){
				mon_thu_31(days);
			}
			else if (month == 8){
				thu_sun_31(days);
			}
			else if (month == 9){
				sun_tus_30(days);
			}
			else if (month == 10){
				tus_fri_31(days);
			}
			else if (month == 11){
				fri_sun_30(days);
			}
			else if (month == 12){
				sun_wed_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2003 Year...............................
		{
			if (month == 1){
				wed_sat_31(days);
			}
			else if (month == 2){
				sat_sat_28(days);
			}
			else if (month == 3){
				sat_tus_31(days);
			}
			else if (month == 4){
				tus_thu_30(days);
			}
			else if (month == 5){
				thu_sun_31(days);
			}
			else if (month == 6){
				sun_tus_30(days);
			}
			else if (month == 7){
				tus_fri_31(days);
			}
			else if (month == 8){
				fri_mon_31(days);
			}
			else if (month == 9){
				mon_wed_30(days);
			}
			else if (month == 10){
				wed_sat_31(days);
			}
			else if (month == 11){
				sat_mon_30(days);
			}
			else if (month == 12){
				mon_thu_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 204 Year...............................
		{
			if (month == 1){
				thu_sun_31(days);
			}
			else if (month == 2){
				sun_mon_29(days);
			}
			else if (month == 3){
				mon_thu_31(days);
			}
			else if (month == 4){
				thu_sat_30(days);
			}
			else if (month == 5){
				sat_tus_31(days);
			}
			else if (month == 6){
				tus_thu_30(days);
			}
			else if (month == 7){
				thu_sun_31(days);
			}
			else if (month == 8){
				sun_wed_31(days);
			}
			else if (month == 9){
				wed_fri_30(days);
			}
			else if (month == 10){
				fri_mon_31(days);
			}
			else if (month == 11){
				mon_wed_30(days);
			}
			else if (month == 12){
				wed_sat_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2005 Year...............................
		{
			if (month == 1){
				sat_tus_31(days);
			}
			else if (month == 2){
				tus_tus_28(days);
			}
			else if (month == 3){
				tus_fri_31(days);
			}
			else if (month == 4){
				fri_sun_30(days);
			}
			else if (month == 5){
				sun_wed_31(days);
			}
			else if (month == 6){
				wed_fri_30(days);
			}
			else if (month == 7){
				fri_mon_31(days);
			}
			else if (month == 8){
				mon_thu_31(days);
			}
			else if (month == 9){
				thu_sat_30(days);
			}
			else if (month == 10){
				sat_tus_31(days);
			}
			else if (month == 11){
				tus_thu_30(days);
			}
			else if (month == 12){
				thu_sun_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2006 Year...............................
		{
			if (month == 1){
				sun_wed_31(days);
			}
			else if (month == 2){
				wed_wed_28(days);
			}
			else if (month == 3){
				wed_sat_31(days);
			}
			else if (month == 4){
				sat_mon_30(days);
			}
			else if (month == 5){
				mon_thu_31(days);
			}
			else if (month == 6){
				thu_sat_30(days);
			}
			else if (month == 7){
				sat_tus_31(days);
			}
			else if (month == 8){
				tus_fri_31(days);
			}
			else if (month == 9){
				fri_sun_30(days);
			}
			else if (month == 10){
				sun_wed_31(days);
			}
			else if (month == 11){
				wed_fri_30(days);
			}
			else if (month == 12){
				fri_mon_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2007 Year...............................
		{
			if (month == 1){
				mon_thu_31(days);
			}
			else if (month == 2){
				thu_thu_28(days);
			}
			else if (month == 3){
				thu_sun_31(days);
			}
			else if (month == 4){
				sun_tus_30(days);
			}
			else if (month == 5){
				tus_fri_31(days);
			}
			else if (month == 6){
				fri_sun_30(days);
			}
			else if (month == 7){
				sun_wed_31(days);
			}
			else if (month == 8){
				wed_sat_31(days);
			}
			else if (month == 9){
				sat_mon_30(days);
			}
			else if (month == 10){
				mon_thu_31(days);
			}
			else if (month == 11){
				thu_sat_30(days);
			}
			else if (month == 12){
				sat_tus_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2008 Year...............................
		{
			if (month == 1){
				tus_fri_31(days);
			}
			else if (month == 2){
				fri_sat_29(days);
			}
			else if (month == 3){
				sat_tus_31(days);
			}
			else if (month == 4){
				tus_thu_30(days);
			}
			else if (month == 5){
				thu_sun_31(days);
			}
			else if (month == 6){
				sun_tus_30(days);
			}
			else if (month == 7){
				tus_fri_31(days);
			}
			else if (month == 8){
				fri_mon_31(days);
			}
			else if (month == 9){
				mon_wed_30(days);
			}
			else if (month == 10){
				wed_sat_31(days);
			}
			else if (month == 11){
				sat_mon_30(days);
			}
			else if (month == 12){
				mon_thu_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2009 Year...............................
		{
			if (month == 1){
				thu_sun_31(days);
			}
			else if (month == 2){
				sun_sun_28(days);
			}
			else if (month == 3){
				sun_wed_31(days);
			}
			else if (month == 4){
				wed_fri_30(days);
			}
			else if (month == 5){
				fri_mon_31(days);
			}
			else if (month == 6){
				mon_wed_30(days);
			}
			else if (month == 7){
				wed_sat_31(days);
			}
			else if (month == 8){
				sat_tus_31(days);
			}
			else if (month == 9){
				tus_thu_30(days);
			}
			else if (month == 10){
				thu_sun_31(days);
			}
			else if (month == 11){
				sun_tus_30(days);
			}
			else if (month == 12){
				tus_fri_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2010 Year...............................
		{
			if (month == 1){
				fri_mon_31(days);
			}
			else if (month == 2){
				mon_mon_28(days);
			}
			else if (month == 3){
				mon_thu_31(days);
			}
			else if (month == 4){
				thu_sat_30(days);
			}
			else if (month == 5){
				sat_tus_31(days);
			}
			else if (month == 6){
				tus_thu_30(days);
			}
			else if (month == 7){
				thu_sun_31(days);
			}
			else if (month == 8){
				sun_wed_31(days);
			}
			else if (month == 9){
				wed_fri_30(days);
			}
			else if (month == 10){
				fri_mon_31(days);
			}
			else if (month == 11){
				mon_wed_30(days);
			}
			else if (month == 12){
				wed_sat_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2011 Year...............................
		{
			if (month == 1){
				sat_tus_31(days);
			}
			else if (month == 2){
				tus_tus_28(days);
			}
			else if (month == 3){
				tus_fri_31(days);
			}
			else if (month == 4){
				fri_sun_30(days);
			}
			else if (month == 5){
				sun_wed_31(days);
			}
			else if (month == 6){
				wed_fri_30(days);
			}
			else if (month == 7){
				fri_mon_31(days);
			}
			else if (month == 8){
				mon_thu_31(days);
			}
			else if (month == 9){
				thu_sat_30(days);
			}
			else if (month == 10){
				sat_tus_31(days);
			}
			else if (month == 11){
				tus_thu_30(days);
			}
			else if (month == 12){
				thu_sun_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2012 Year...............................
		{
			if (month == 1){
				sun_wed_31(days);
			}
			else if (month == 2){
				wed_thu_29(days);
			}
			else if (month == 3){
				thu_sun_31(days);
			}
			else if (month == 4){
				sun_tus_30(days);
			}
			else if (month == 5){
				tus_fri_31(days);
			}
			else if (month == 6){
				fri_sun_30(days);
			}
			else if (month == 7){
				sun_wed_31(days);
			}
			else if (month == 8){
				wed_sat_31(days);
			}
			else if (month == 9){
				sat_mon_30(days);
			}
			else if (month == 10){
				mon_thu_31(days);
			}
			else if (month == 11){
				thu_sat_30(days);
			}
			else if (month == 12){
				sat_tus_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2013 Year...............................
		{
			if (month == 1){
				tus_fri_31(days);
			}
			else if (month == 2){
				fri_fri_28(days);
			}
			else if (month == 3){
				fri_mon_31(days);
			}
			else if (month == 4){
				mon_wed_30(days);
			}
			else if (month == 5){
				wed_sat_31(days);
			}
			else if (month == 6){
				sat_mon_30(days);
			}
			else if (month == 7){
				mon_thu_31(days);
			}
			else if (month == 8){
				thu_sun_31(days);
			}
			else if (month == 9){
				sun_tus_30(days);
			}
			else if (month == 10){
				tus_fri_31(days);
			}
			else if (month == 11){
				fri_sun_30(days);
			}
			else if (month == 12){
				sun_wed_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2014 Year...............................
		{
			if (month == 1){
				wed_sat_31(days);
			}
			else if (month == 2){
				sat_sat_28(days);
			}
			else if (month == 3){
				sat_tus_31(days);
			}
			else if (month == 4){
				tus_thu_30(days);
			}
			else if (month == 5){
				thu_sun_31(days);
			}
			else if (month == 6){
				sun_tus_30(days);
			}
			else if (month == 7){
				tus_fri_31(days);
			}
			else if (month == 8){
				fri_mon_31(days);
			}
			else if (month == 9){
				mon_wed_30(days);
			}
			else if (month == 10){
				wed_sat_31(days);
			}
			else if (month == 11){
				sat_mon_30(days);
			}
			else if (month == 12){
				mon_thu_31(days);
			}break;
		}
		else{
			i++;
		}
		if (year == i) // This is 2015 Year...............................
		{
			if (month == 1){
				thu_sun_31(days);
			}
			else if (month == 2){
				sun_sun_28(days);
			}
			else if (month == 3){
				sun_wed_31(days);
			}
			else if (month == 4){
				wed_fri_30(days);
			}
			else if (month == 5){
				fri_mon_31(days);
			}
			else if (month == 6){
				mon_wed_30(days);
			}
			else if (month == 7){
				wed_sat_31(days);
			}
			else if (month == 8){
				sat_tus_31(days);
			}
			else if (month == 9){
				tus_thu_30(days);
			}
			else if (month == 10){
				thu_sun_31(days);
			}
			else if (month == 11){
				sun_tus_30(days);
			}
			else if (month == 12){
				tus_fri_31(days);
			}break;
		}
	}
}

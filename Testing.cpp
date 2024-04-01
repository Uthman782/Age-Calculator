#include<iostream>
using namespace std;
void thu_fri_29(int day)
{
        for (int i = 1; i <= 29; i++)
        {
        	if(day>29){
                cout << "What have you entered.. ";
                exit(0);
                break;
            }
            else if(day<=29){
           if (day == i)
            {
                cout << "Thursday";
                break;
            }
            else{
            i++;
            }
            if (day == i)
            {
                cout << "Friday";
                break;
            }
            else{
            i++;
            }
            if (day == i)
            {
                cout << "Saturday";
                break;
            }
            else{
            i++;
            }
            if (day == i)
            {
                cout << "Sunday";
                break;
            }
            else{
            i++;
            }
            if (day == i)
            {
                cout << "Monday";
                break;
            }
            else{
            i++;
            }
            if (day == i)
            {
                cout << "Tuesday";
                break;
            }
            else{
            i++;
            }
            if (day == i)
            {
                cout << "Wednesday";
                break;
            }
			}
        }
    }
    int main()
    {
    	while(true){
        cout << "Hello Enter Days: ";
        int a;
        cin>>a;
        thu_fri_29(a);
        cout<<endl;
		}
        return 0;
    }

#include<iostream>
#include<string>
using namespace std;

void sum(int* c, int* d){
	int sum;
	sum = (*c) + (*d);
	cout<<"SUM is:"<<sum<<endl;
	*c = 50;
	*d = 80;
	
}
int main(){
    int a = 10;
//    int* b= &a;
//    cout<<"The Value of a: "<<a<<" At adress a"<<b<<" and adress of b :"<<&b<<endl;
//    int marks[] = {5,6,9,8,6,4};
//    for (int i = 0; i ; i++)
//    {
        /* code */
//    }
//    cout<<"The value of a is (*b): "<<*a;
    
    int x=30,y=50;
    cout<<"x is: "<<x<<endl;
    cout<<"y is: "<<y<<endl;
    sum(&x, &y);
    cout<<"x is: "<<x<<endl;
    cout<<"y is: "<<y<<endl;
    sum(&x, &y);
return 0;
}

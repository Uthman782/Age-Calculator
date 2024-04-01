#include<iostream>
using namespace std;

class Base{
	private:
		int a = 10;
	public:
	virtual	void display(){
			cout<<"Base Class Display is here !"<<a;
		}
};
class Derived : public Base{
	private:
		int a = 20;
	public:
		void display(void){
			cout<<"Derived Class is here !"<<a;
		}
};
int main(){
	Base *obj_pointer;
	Derived obj1;
	obj_pointer = &obj1;
	obj_pointer->display();
}
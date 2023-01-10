#include<iostream>
#include "Class.h";
using namespace std;
int main(){
	A a;
		a.setx(5);
		cout<<"A values "<<a.readx()<<endl;
	A a2(10,3);
	cout<<"A values "<<a2.readx()<<endl;
		return 0;
}

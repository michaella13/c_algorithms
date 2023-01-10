#include<iostream>
using namespace std;
class Person{
};
main(){
	int a=5; int c=6;
	int *b;
	b=&a;
*b=c;
	cout<<"b is equal to "<<*b<<endl;
	
}

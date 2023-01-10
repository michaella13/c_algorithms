#include<iostream>
using namespace std;
int main(){
	float a=0b00001001;
	float b=0b00001101;
	short sum=a+b;
	float division=b/a;
	//if short is used it wont give decimals
	cout<<"sum: "<<division<<endl;
}

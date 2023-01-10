#include<iostream>
using namespace std;
int x;
void setXMemory(int *xp){
	*xp=1000;
}
int main(){
	setXMemory(&x);
	
	cout<<x<<endl;
	x=5;
	cout<<x;
}

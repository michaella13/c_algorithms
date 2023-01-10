#include<iostream>

using namespace std;
int main(){

	int myArray[]={1,2,3};
	myArray[3]=10;
	for(int i:myArray){
		cout<<i<<endl;
	}
}

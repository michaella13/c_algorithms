#include<iostream>
using namespace std;
int main(){
	int array[5];
	int i;
cout<<"Enter five elements";
for(i=0;i<5;i++){
	cin>>array[i];
}
//cout<<"The elements are :";
for(i=0;i<5;i++){
	cout<<"Element at index "<<i<<" is "<<i[array]<<endl;
	cout<<"The memory address at index: "<<i<<" is: "<<&array[i]<<endl;
}

}

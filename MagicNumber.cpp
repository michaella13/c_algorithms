#include<iostream>
using namespace std;
bool isPrime(int n){
	//factors of a number are from 2 to half of the number and the number itself
	if(n<=1){
		return false;
}
	for(int i=2;i<=n/2;i++){
	if(n%i==0)	{
		return false;
	}

	}
		return true;
}
int isMagicArray(int *array,int size){
	if(size<=0){
		return 0;
	}
	int sum=0;
	for(int i=0;i<size;i++){
		if(isPrime(array[i])){
		sum+=array[i];
		}
	}
	if(sum==array[0]){
		return 1;
	}
	else{
		return 0;
	}
	
}
int main(){
	int array[]={21, 3, 7, 9, 11, 4, 6};
	int size=sizeof(array)/sizeof(array[0]);
	int result=isMagicArray(array,size);
	cout<<result<<endl;
}

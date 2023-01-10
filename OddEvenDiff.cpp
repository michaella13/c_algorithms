#include<iostream>
using namespace std;

int OddEvenDifference(int *array,int size){
	int sumOdd=0,sumEven=0;
	for(int i=0;i<size;i++){
		if(array[i]%2==0){
			sumEven+=array[i];
		
		}
		else{
			sumOdd+=array[i];
			
		}
	}
		
		
	int result=sumOdd-sumEven;
	return result;
}
int main(){
	int array[]={3,2,3,4};
	int size=sizeof(array)/sizeof(array[0]);


	int result=OddEvenDifference(array,size);
	cout<<result<<endl;
}

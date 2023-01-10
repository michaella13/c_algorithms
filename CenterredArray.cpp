#include<iostream>
using namespace std;
int centeredArray(int *arr,int size){
	if(size<3){
		return 0;
	}
	
	else{
		if(size%2==0){
			return 0; 
		}else{
			int middle=(size-1)/2;
			for(int i=0;i<size/2;i++){
				if(arr[i]<=arr[middle]||arr[i+middle+1]<=arr[middle]){
					return 0;
				}
			}
			return 1;
		}
		return 0;
	}
}
int main(){
	int arr[]={8,4,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	centeredArray(arr,size);
}

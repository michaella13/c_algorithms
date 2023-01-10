#include<iostream>
using namespace std;
void merge(int * arr, int begin,int mid, int end){
	int sizeOfLeftArray=mid-begin+1;
	int sizeOfRightArray=end-mid;
	int leftArr[sizeOfLeftArray];
	int rightArr[sizeOfRightArray];
	
	for(int i=0;i<sizeOfLeftArray;i++){
		leftArr[i]=arr[begin+i];
	}
	for(int j=0;j<sizeOfRightArray;j++){
		rightArr[j]	=arr[mid+1+j];
	}
	int leftIndexCount=0;
	int rightIndexCount=0;
	int mergedIndexCount=begin;
	
	//merge when both subArr have elements
	while(leftIndexCount<sizeOfLeftArray&&rightIndexCount<sizeOfRightArray){
		if(leftArr[leftIndexCount]<=rightArr[rightIndexCount]){
			arr[mergedIndexCount]=leftArr[leftIndexCount];
			leftIndexCount++;
		}
		else{
			arr[mergedIndexCount]=rightArr[rightIndexCount];
		rightIndexCount++;	
		}
		mergedIndexCount++;
	}
	//incase elements on left remain
	while(leftIndexCount<sizeOfLeftArray){
		arr[mergedIndexCount]=leftArr[leftIndexCount];
		leftIndexCount++;
		mergedIndexCount++;
	}
	//incase elements on right remain
	while(rightIndexCount<sizeOfRightArray){
		arr[mergedIndexCount]=rightArr[rightIndexCount];
		rightIndexCount++;
		mergedIndexCount++;
	}
}
void mergeSort(int* arr,int begin,int end){
	if(begin>=end){
		return ;
	}
	int mid=(begin+end)/2;
//	cout<<"left split----:"<<endl;
	mergeSort(arr,begin,mid);
//	cout<<"right split-------:"<<endl;
	mergeSort(arr,mid+1,end);
//	cout<<"merging------:"<<endl;
	merge(arr,begin,mid,end);
//	cout<<"--------merge started-------:"<<endl;
}
void print(int *arr,int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
int main(){
	int array[]={11,10,7,4,8,3};
	cout<<"Unsorted Array"<<endl;
	print(array,6);
	mergeSort(array,0,5);
	cout<<"sorted array"<<endl;
	print(array,6);
}

#include<iostream> 
using namespace std;
 int binarySearch(int *arr,int size, int key){
 	int start,end,pos;
 	start=0;
 	end=size-1;
 	pos=-1;
 	while(start<=end){
 		int mid=(start+end)/2;
 		if(key==arr[mid]){
 			return mid;
		 }
		 else if(arr[mid]>key){
		 	end=mid-1;
		 }
		 else{
		 	start=mid+1;
		 }
 		
	 }
	 return pos;
 }
 int main(){
 	int array[]={1,2,3,4,5};
 	int size=sizeof(array)/sizeof(array[0]);
 	int key=2;
 	int result=binarySearch(array,size,key);
 	cout<<result<<endl;
 }

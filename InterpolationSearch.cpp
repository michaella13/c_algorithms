#include<iostream> 
using namespace std;
 int binarySearch(int *arr,int size, int x){
 	int lo,hi,pos;
 lo=0;
 hi=size-1;
 	
 	while(lo<=hi){
 		int pos=lo + (x - arr[lo]) *(hi - lo)/(arr[hi] - arr[lo]);
 		if(x==arr[pos]){
 			return pos;
		 }
		 else if(arr[pos]>x){
		 	hi=lo-1;
		 }
		 else{
		 	lo=hi+1;
		 }
 		
	 }
	 return -1;
 }
 int main(){
 	int array[]={1,2,3,4,5};
 	int size=sizeof(array)/sizeof(array[0]);
 	int key=1;
 	int result=binarySearch(array,size,key);
 	cout<<result<<endl;
 }

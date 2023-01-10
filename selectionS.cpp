#include<iostream>
using namespace std;
int array[]={8,3,5,1,7,0};
int main(){
	
	int n=sizeof(array)/sizeof(array[0]);
	for(int i=0;i<n-1;i++){
		int min_index=i;
		for(int j=i+1;j<n;j++){
			if(array[j]<array[min_index])
			min_index=j;
		}
		if(array[min_index]!=array[i]){
			int temp=array[i];
			array[i]=array[min_index];
			array[min_index]=temp;
		}
	}
	cCVHout<<"The sorted array is: "<<endl;
	for(int i=0;i<n;i++){
		cout<<array[i]<<endl;
	}
}

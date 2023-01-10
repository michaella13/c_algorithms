#include<iostream>
using namespace std;

int isAllPossibities(int *arr,int size){
	if(size<=0){
		return 0;
	}
	for(int i=0;i<size;i++){
		int flag=0;
		for(int j=0;j<size;j++){
		if(arr[j]==i){
		flag=1;
		}
		}
		if(flag==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int array[]={1,2,0,3};
	int size=sizeof(array)/sizeof(array[0]);
	int result=isAllPossibities(array,size);
	cout<<result<<endl;
}

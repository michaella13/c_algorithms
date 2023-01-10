#include<iostream>
using namespace std;
int isMeandra(int *array, int size){
	for(int i=0;i<size;i++){
	for(int j=0;j<size;j++){
		if(array[i]==(-1*array[j])){
			return 0;
		}
	}
	}
	return 1;
}
int main(){
	int array[]={1,2,-1,2};
	int size=sizeof(array)/sizeof(array[0]);
	cout<<isMeandra(array,size)<<endl;
}

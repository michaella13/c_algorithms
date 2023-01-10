#include<iostream>
using namespace std;
int *returnCommon(int *arr1, int *arr2, int size1,int size2){
int *result=new int[size1+size2];
	for(int i=0;i<size1;i++){
		int k=0;
		for(int j=0;j<size2;j++){
			if(arr1[i]==arr2[j]){
				result[k]=arr1[i];				
			}
				k++;
		}
	
	}
	return result;
}
int main(){
	int arr1[]={1,8,3,2},arr2[]={4,2,6,1};
	int size1=sizeof(arr1)/sizeof(arr1[0]);
	int size2=sizeof(arr2)/sizeof(arr2[0]);
	int *res=returnCommon(arr1,arr2,size1,size2);
	cout<<res<<endl;
}

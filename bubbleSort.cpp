#include<iostream>
using namespace std;
int main(){
	int array[]={8,7,1,5,4,12,2,23};
	int n=sizeof(array)/sizeof(array[0]);
	for (int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(array[j]>array[j+1]){
				int temp=array[j+1];
				array[j+1]=array[j];
				array[j]=temp;
			}
		
		}
		cout<<"After"<<endl;
						for(int i=0;i<n;i++){
							
		cout<<array[i]<<endl;
	}
	
	}
	cout<<"Sorted array "<<endl;
	for(int i=0;i<n;i++){
		cout<<array[i]<<endl;
	}
}

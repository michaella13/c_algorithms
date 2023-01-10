#include<iostream>
using namespace std;
int *arraySorter(int array[]){
	int i,j,a;
	for(i=0;i<5;i++){
		for (j=i+1;j<5;j++){
			if(array[i]>array[j]){
				a=array[i];
				array[i]=array[j];
				array[j]=a;
			}
			
		}
		
	}

}
int main(){
int	array[]={12,1,9,8,70,40};
	arraySorter(array);
cout<<"Array in ascending order: "<<endl;
for(int i=0;i<5;i++){
	cout<<array[i]<<endl;
	
}
}

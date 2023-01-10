#include<iostream>

using namespace std;
int main(){
int myArray[]={5,3,0,7,1,2,2};
int n=sizeof(myArray)/sizeof(myArray[0]) ;

int k,p; //k=current element
for(int i=1;i<n;i++){
	k=myArray[i];
 p=i-1;
	for(;p>=0&&myArray[p]>k;p--){
		myArray[p+1]=myArray[p];
	}
	myArray[p+1]=k;
}
for (int i=0;i<n;i++){
	cout<<myArray[i]<<endl;
}
}

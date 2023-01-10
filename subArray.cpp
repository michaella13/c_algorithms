#include<iostream>
#include <cstring>
using namespace std;
char *getCharArray(char *arr,int start,int length){
	int len=strlen(arr);
	if(arr==NULL){
		return NULL;
	}
	if(start<0||length>len||(start+length)>len||start>=len||length<0){
			return NULL;
	}
//if(length==0){
//	char *array={};
//	return array;
//}
	char *res=new char[length];
	//track current index
	int x=0;
	for(int i=start;i<(start+length);i++){
		res[x]=arr[i];
		x++;
	}
	return res;
}
int main(){
	static char arr[]={'a','b','c','d'};
	char *res=getCharArray(arr,2,0);
	cout<<res<<endl;
	
}

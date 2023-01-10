#include<iostream>
using namespace std;
int main(){
int myArray[3]={1,4,5};
int *pointerArray;
pointerArray=myArray;
cout<<"Index 1: "<<myArray[1]<<endl;
cout<<"First pointer: "<<*pointerArray<<endl;
return 0;
}


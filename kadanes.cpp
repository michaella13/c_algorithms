#include<iostream>
using namespace std;

int kadane(int* A, int size){
	int maxSumCurrent = 0;
	int maxSumGlobal = 0;
	for(int i = 0; i < size; i++){
		maxSumCurrent=max(A[i], maxSumCurrent+A[i]);
		if(maxSumCurrent>maxSumGlobal){
			maxSumGlobal = maxSumCurrent;
		}
	}
	return maxSumGlobal;
}

int main(){
	int testArray[6] = {11, 3, 4, 7, -9, 8};
	int result = kadane(testArray, 6);
	cout<<"The result() after applying Kadane's algo is: "<<result;
	return 0;
}

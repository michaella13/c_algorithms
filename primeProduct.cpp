#include<iostream>
using namespace std;
bool isPrime(int n){

	if(n<=1){
		return false;
}
	for(int i=2;i<=n/2;i++){
	if(n%i==0)	{
		return false;
	}

	}
		return true;
}
int isPrimeProduct(int n){
if(isPrime(n)){
	return 0;	
}

for(int i=2;i<=n/2;i++){
	if(isPrime(i) && n%i==0 && isPrime(n/i)){
		return 1;
	}
}
return 0;
}

int main(){
	cout<<isPrimeProduct(22)<<endl;
}

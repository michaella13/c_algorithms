#include<iostream>
using namespace std;

int countDigits(int digit, int number){
	int count;
	//to see the number of occurences of digit in given number 
	while(number>0){
		if(number%10==digit){
			count++;
		
		}
			number = number/10;
	}
	return count;
}

int findMaxOccur(int n){
//	int maxCount=0;
//	int maxDigit;
//	int temp = n;
//	
//	while(n){
//		int i= n%10;
//		int count = countDigits(i,temp);
//		if(i!=maxDigit){
//		if(count>maxCount){
//			maxCount = count;
//			maxDigit = i;
//			break;
//		}else{
//		
//		if(count==maxCount){
//			maxDigit = -1;
//			n=n/10;
//		}
//		}
//	}
//	}
//1223
int maxOcc=0;
int result;
for(int i=0;i<=9;i++){
	int count=countDigits(i,n);

	if(count>maxOcc){
		maxOcc=count;
		result=i;

}
}
return result;	
}


int main(){
//	int n;
//	cout<<"Enter a number" <<endl;
//	cin>>n;
	cout<<"THe maximum occuring number is: ";
	cout<<findMaxOccur(11112)<<endl;
//cout<<countDigits(0,102030);

	return 0;
}

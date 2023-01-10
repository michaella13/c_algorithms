#include<iostream>
#include<vector>
using namespace std;
int main(){

	vector<int> age={16,18,20,49,72};
//	vector[int]age={16,18,20,49,72};
//vector<int>age(16,2);
	for(const int&i:age){
		cout<<"Age "<<i<<endl;
		
	}
	age.push_back(10);
//	for(int i=0;i<age.size();i++){
//		cout<<age[i]<<endl;
//	}
}

//#include<iostream>
//using namespace std;
//int main(){
//	string firstValue,secondValue;
//	
//	
//	cout<<"Enter two strings :"<<endl;
//	cin>>firstValue;
//	cin>>secondValue;
//	string combined=firstValue+secondValue;
//	cout<<"The last character is :"<<combined[combined.length()-1]<<endl;
//
//	return 0;
//}
#include <iostream>
using namespace std;
int main()
{
    string input;
    cout<<"Enter a string : "<<endl;
    cin >> input;
    input.pop_back();
    cout<<input<<endl;
}

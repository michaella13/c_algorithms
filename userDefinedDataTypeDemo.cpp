#include<iostream>
using namespace std;

	enum Gender {
		MALE,FEMALE
	};
	struct Person{
	string firstName;
	Gender gender;	
	};
int main(){
Person p={"Michaella",FEMALE};
cout<<p.firstName <<" is "<<p.gender;
}

#include<iostream>
using namespace std;

	enum Gender {
		MALE,FEMALE
	};
	struct Person{
	string firstName;
	Gender gender;	
	};
	
 string tostring(int gender){
	if(gender==0){
		return "MALE";
	}else if(gender==1){
		return "FEMALE";
	}
}
int main(){
cout<<"Enter 5 people's names and gender consecutively"<<endl;
string firstName;
string gender;
Person persons[5]={};
for(int i=0;i<5;i++){
	cout<<"Enter person "<<i+1<<" FirstName "<<endl;
	cin>>firstName;
	cout<<"Enter gender for person "<<i+1<<endl;
	cin >>gender;
	Person p={};
	p.firstName=firstName;
	if(gender=="MALE"){
		p.gender=MALE;
	}else{
		p.gender=FEMALE;
	}
	persons[i]=p;
	
}
for(int i=0;i<5;i++){
tostring(persons[i].gender);
	cout<<persons[i].firstName<<"/'s gender is "<<persons[i].gender<<endl;
}
}

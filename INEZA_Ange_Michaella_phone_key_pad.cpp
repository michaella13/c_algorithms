#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
string n;
vector<string> o;
 int i, x(0),ne;
map<string,char> character;
{
character["0"] = '0';
        character["00"] = '+';
        character["000"] = '!';
        character["1"] = '1';
        character["11"] = 'a';
        character["111"] = 'b';
        character["1111"] = 'c';
        character["2"] = '2';
        character["22"] = 'd';
        character["222"] = 'e';
        character["2222"] = 'f';
        character["3"] = '3';
        character["33"] = 'g';
        character["333"] = 'h';
        character["3333"] = 'i';
        character["4"] = '4';
        character["44"] = 'j';
		character["444"] = 'k';
        character["4444"] = 'l';
        character["5"] = '5';
        character["55"] = 'm';
        character["555"] = 'n';
        character["5555"] = 'o';
        character["6"] = '6';
        character["66"] = 'p';
        character["666"] = 'q';
        character["6666"] = 'r';
        character["7"] = '7';
        character["77"] = 's';
        character["777"] = 't';
        character["7777"] = 'u';
        character["8"] = '8';
        character["88"] = 'v';
        character["888"] = 'w';	
        character["8888"] = 'x';
        character["9"] = '9';
        character["99"] = 'y';
        character["999"] = 'z';
        character["9999"] = ',';
        character["01"] = ' ';
       
}
cout<<"Enter number of elements: "<<endl;
cin>>ne;
cout<<"Please enter message: "<<endl;
cin>>n;
for(int i=0;i<ne;i++){
	if(n.at(i) == n.at(i + 1)){
	cout<<"n.at(i) == n.at(i + 1)";	
	cout<<"Hello"<<endl;
		cout<<o[x]<<endl;
		o[x]=n.at(i)+n.at(i+1);
	
	}
	

//o[x].push_back(n.at(i)+n.at(i+1));
	else
	x++;
	o[x]=n.at(i);
//	o[x].push_back(n.at(i));
}

    for(x = 0; x < o.size(); x++)
        cout << "Output message: " << character[o[x]] << endl;

    cout << "Count: " << o.size() << endl;
    return 0;
}

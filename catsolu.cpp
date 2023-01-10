
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main(){
    char Array[10][15]={{'+','!',':','<','>','"','|','{','}',';','\\',',','/','?'},{'a','b','c'},
                          {'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r'},{'s','t','u'},{'v','w','x'},{'y','z',','}};
      string parsed;
	string number;
  string output;
    cout<<"Enter the number keystrokes:  ";
    getline(cin,number);
     stringstream str_stream(number);
     while(str_stream >> parsed){
         if(parsed.length() == 1){
           output+=parsed;
         }else if(parsed.length() > 1){
             string toBeConverted(1,parsed[0]);
             if(parsed.length() == 2){
                 if(parsed == "01"){
                     output+=" ";
                 }else{
                    output+=Array[stoi(toBeConverted)][0];
                 }
             }else{
                 output+=Array[stoi(toBeConverted)][parsed.length() - 2];
             }
         }
     }
      
       cout<<output<<"  "<<endl;
    return 0;
    //The output of the program 3 333 222 4444 4444 555 01 888 5555 6666 4444 22 000 is: 3helln world!
}

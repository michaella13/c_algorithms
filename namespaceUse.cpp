#include<iostream>
#include "animalNames.h"

using namespace std;
using namespace animalNames;
int main(){
	for(int i=0;i<2;i++){
		cout<<"A cow named "<<animalNames::cow[i]<<" is always beautiful"<<endl;
}
return 0;
}

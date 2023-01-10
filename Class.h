#include<iostream>
using namespace std;
class A{
//implicit constructor method with class' name
		public :A(){
			cout<<"A"<<endl;
		}
		public :A(int xp, int yp){
			x=xp;
			y=yp;
		}
	private:
		int x;
		int y;
	public:
		void setx(int xp){
			x=xp;
		}
		void sety(int yp){
			y=yp;
		}
	int readx(){
			return x;
		}
	
		};


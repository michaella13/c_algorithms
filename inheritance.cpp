#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"A called"<<endl;
		}
		int x;
		int getx(int x){
			cout<<"X: "<<x<<endl;
		}
};
class B:public virtual A{

	public:
		B(){
			cout<<"B is called"<<endl;
		}
			int getx(int x){
			cout<<"X: "<<x<<endl;
		}
};
class C:public virtual A{
	public:
		C(){
			cout<<"C is called"<<endl;
		}
			int getx(int x){
			cout<<"X: "<<x<<endl;
		}
};
class D:public virtual B,public virtual C{
	public:
		D(){
			cout<<"D is called"<<endl;
		}
};
main(){
	D d;
	d.C::getx(10);
	
}

#include<iostream>
//an array is a data strucutre and an object
using namespace std;
const int size=20;
	int top=-1;
	int stack[size];
		int isFull(){
		if(top==size)
		return 1;
		return 0;
	}
	int isEmpty(){
		if(top==-1)
		return 1;
		return 0;
	}
	void push(int data){
		if(!isFull()){
			top++;
			stack[top]=data;
		}else{
			cout<<"stack overflow"<<endl;
		}
	}
	void pop(){
		if(!isEmpty()){
			top--;

		}else{
			cout<<"isEmpty"<<endl;
		}
	}
	int peek(){
		if(!isEmpty())
			return stack[top];
		return INT_MIN;
	}
	void display(){
		if(!isEmpty()){
			for(int i=top;i>=0;i--){
				cout<<stack[i]<<endl;
			}
		}else{
			cout<<"emopty";
		}
	}

int main(){
	int test=1;
	do{
		int x;
	cout<<"Choose action\n 1.Push\n 2.Pop\n 3.Peek\n 4.Display"<<endl;
cin>>x;


	switch(x){
		case 1:
				int y;
			cout<<"Enter the size to push"<<endl;
	cin>>y;
	int data;
		for(int i=0;i<y;i++){
			cout<<"Enter element "<<i<<endl;
			cin>>data;
			push(data);
		}
			cout<<"Display? 1=yes / 2=no ";
			int z;
			cin>>z;
			if(z==1){
				display();
			}else{
				return;
			}
			case 2:
				pop();
					cout<<"Display? 1=yes / 2=no ";
		
			cin>>z;
			if(z==1){
				display();
			}
				case 3:
					peek;
					case 4:
						display;
	}
}while(test=1);
	
//	push(100);
//	push(200);
//	push(150);
//	display();
//	cout<<"after pop"<<endl;
//	pop();
//		display();
//		peek();
}

#include<iostream>
#define MAX 100
using namespace std;
class Dequeue{
	public:
		int rear;
		int front;
		int size;
		int dequeue[MAX];
		public:
			Dequeue(int size){
				this->rear=0;
				this->front=-1;
				this->size=size;
			}
			bool isEmpty(){
				if(front==-1)
				return true;
				return false;
			}
			bool isFull(){
				if((front==rear&&rear==size-1)||(front==rear+1))
				return true;
				return false;
			}
			
		void addToFront(int data)	{
			if(isFull()){
						cout<<"Queue overflow";
		return;
			}
			//if is empty()
		if(front==-1){
			front=0;
			rear=0;
		}
		else if(front==0){
			//next element is before front
			front=size-1;
			
		}else{
			front=front-1;
		}
		dequeue[front]=data;
		}
		void addAtRear(int data){
			if(isFull()){
						cout<<"Queue overflow";
		return;
			}	if(front==-1){
			front=0;
			rear=0;
	}else if(rear==size-1){
		rear=0;
	}else{
		rear++;
	}
	dequeue[rear]=data;
			
		}
		void deleteFromFront(){
			if(isEmpty()){
				cout<<"stack underflow"<<endl;
				return;
			}
			//if we have a single elt
			if(front==rear){
				front=rear=-1;
			}
			else if(front==size-1){
				front=0;
			}else{
				front++;
			}
		}
		void deleteFromRear(){
			if(isEmpty()){
				cout<<"stack underflow"<<endl;
				return;
			}
				if(front==rear){
				front=rear=-1;
			}
		else if(rear==0)
		rear==size-1;
		else
		rear--;
		}
			void display(){
		if(rear==front==-1){
			cout<<"Empty"<<endl;
			return;
		}
		if(front>rear){
			for(int k=front;k<=size-1;k++){
				cout<<dequeue[k]<<endl;
			}
			for(int j=0;j<=rear;j++){
				cout<<dequeue[j]<<endl;
			}
		}
		for(int i=front;i<=rear;i++){
			cout<<dequeue[i]<<endl;
		}
	}
};
int main(){
Dequeue q(5);
	q.addToFront(4);
	q.addToFront(5);
	q.addAtRear(3);
	q.deleteFromFront();
	q.display();
}

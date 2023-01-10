#include<iostream>
using namespace std;
struct Node{
	public:
	int data;
	Node *next;
	public:
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};
struct Queue{
	public:
		Node *front, *rear;
		public:
			 Queue(){
				front=NULL;
				rear=NULL;
			}
//				~Queue(){
//			delete[] front;
//		}
			void enqueue(int data){
				Node * temp=new Node(data);
				//check if empty
				if(front==NULL){
					//both front and rear will be the 1st elt
					front=rear=temp;
					return;
				}
				rear->next=temp;
				//rear has to change
				rear=temp;
			}
			void display(){
				if(front==NULL){
					cout<<"Empty"<<endl;
					return;
				}
				Node *current=front;
				while(current!=NULL){
					cout<<current->data<<endl;
					current=current->next;
				}
			}
			void dequeue(){
				if(front==NULL){
					cout<<"Empty"<<endl;
					return;
				}
				Node *temp=front;
				front=front->next;
				if(front==NULL){
					rear=NULL;
				}
				delete temp;
			}
};
int main(){
	Queue q;
	q.enqueue(12);
	q.enqueue(15);
	q.enqueue(18);
	q.dequeue();
	q.display();
}

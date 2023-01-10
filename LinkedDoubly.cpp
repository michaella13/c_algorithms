#include<iostream>
using namespace std;
struct Node{
	public:
		Node *previous;
		int data;
		Node * next;
		public:
			Node(int data){
				this->previous=NULL;
				this->data=data;
				this->next=NULL;
			}
};
struct Doubly{
	public:
		Node *head;
		Node *tail;
	public:
		Doubly(){
			this->head=NULL;
			this->tail=NULL;
			}
Node * addBefore(int data){
	Node *newNode=new Node(data);
	if(head==NULL){
		head=newNode;
	    tail=newNode;
return newNode;
	}
	head->previous=newNode;
	newNode->next=head;
	head=newNode;
	return newNode;
}
void displayForward(){
	if(head==NULL){
		cout<<"Empty"<<endl;
		return;
	}
	Node * temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
//////

Node *addAtEnd(int data){
	Node *newNode=new Node(data);
	if(head==NULL){
		head=newNode;
			tail=newNode;
			return newNode;
			
	}
Node *temp=head;
while(temp->next!=NULL){
	temp=temp->next;
}
temp->next=newNode;
newNode->previous=temp;
tail=newNode;
return newNode;
}
void displayBackwards(){
	if(head==NULL){
		cout<<"Empty";
	}
	Node *temp=tail;
while(temp!=NULL){
	cout<<temp->data<<endl;
	temp=temp->previous;
}
}
/// insert data after a given node

void insertAfter(Node *node,int data){
	Node*newNode=new Node(data);
	if(node==NULL)
		return;
	
	if(node->next==NULL){
		node->next=newNode;
		newNode->previous=node;
	    tail=newNode;
		return;
	}
	Node*after=node->next;
	node->next=newNode;
	newNode->previous=node;
	newNode->next=after;
	after->previous=newNode;
	}
	
	void insertAfter(Node)
			
};
int main(){
	Doubly doubly;
	doubly.addBefore(3);
	Node*node=doubly.addBefore(4);
	doubly.displayForward();
	doubly.addAtEnd(8);
	cout<<"------------BREAK--------"<<endl;
	doubly.displayForward();
	cout<<"------------BREAK--------"<<endl;
	doubly.displayBackwards();
	doubly.insertAfter(node,1);
	cout<<"------------BREAK--------"<<endl;
		doubly.displayForward();
}

#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	public:
		Node(){
			this->next=NULL;
		}
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};
class LinkedList{
	public:
		Node * head;
		public:
			LinkedList(){
				head=NULL;
			}
			void addNewNode(int data){
				Node *newNode= new Node(data);
				if(head==NULL){
					head=newNode;
					return;
				}
			
			Node *temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newNode;
			}
			void displayNode(){
				if(head==NULL){
					cout<<"Empty List"<<endl;
					return;
				}
				Node * temp=head;
				while(temp!=NULL){
					cout<<temp->data<<endl;
					temp=temp->next;
				}
			}
			void deleteNode(int position){
				if(head==NULL){
					cout<<"Empty list"<<endl;
					return;
				}
				if(position==1){
					Node *temp=head;
					head=head->next;
					delete temp;
				}
				int size=0;
				Node *current=head;
				//to count size
				while(current!=NULL){
					size ++;
					current=current->next;
				}
				if(size<position){
					cout<<"Out of range"<<endl;
					return;
				}
				current=head;
				Node *previous;
				while(position>1){
					previous=current;
					current=current->next;
						position --;
				}
				previous->next=current->next;
				delete current;
			}
			void insertNode(int position,int data){
				Node *newNode=new Node(data);
				if(head==NULL){
					if(position>1)
					return;
				else{
					head=newNode;
					return;
				}
					
				}
				Node *current=head;
				int size=0;
				while(current!=NULL){
					size++;
					current=current->next;
				}
				if(size<position){
					cout<<"position out of bound"<<endl;
					return;
				}
			if(position==1){
				Node *temp=head;
				newNode->next=temp;
				head=newNode;
				return;
			}
			Node *previous;
			current=head;
			while(position>1){
				previous=current;
				current=current->next;
				position--;
			}
			previous->next=newNode;
			newNode->next=current;
			}
		
	Node* searchPosition(int position){
				if(head==NULL)
				return NULL;
			int count=0;
		Node* current=head;
		while(current!=NULL){
			count++;
			if(count==position){
				cout<<"element is; "; 
					return current;
			}
		
			current=current->next;
		}
					}
					//if u want to return the data return node, make the return type a int and return current->data;
					
					Node * searchKey(int value){
						if(head==NULL)
						return NULL;
						int count=0;
						Node *current=head;
						while(current!=NULL){
							count++;
							if(current->data==value)
							return current;
							current=current->next;
						}
						return NULL;
					}
};
int main(){
	cout<<"Node"<<endl;
	LinkedList list;
	list.addNewNode(5);
	list.addNewNode(2);
	list.addNewNode(3);
	list.displayNode();
		list.insertNode(1,8);
	cout<<"inserted list"<<endl;
		list.displayNode();
	list.deleteNode(2);
	cout<<"Deleted list"<<endl;
	list.displayNode();
	list.insertNode(3,5);
	cout<<"search by position"<<endl;
	cout<<list.searchPosition(1)->data<<endl;
	cout<<"searching by key"<<endl;
	cout<<list.searchKey(5)<<endl;
}


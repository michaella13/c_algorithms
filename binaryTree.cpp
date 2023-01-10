#include<iostream>
using namespace std;
class Node{

public:
	int data;
	Node *left;
	Node *right;
	Node (int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};
class BinaryTree{
	public:
		Node *root;
		BinaryTree(){
			this->root=NULL;
		}
		Node * addNode(Node *current,int data,bool isRight){
			Node *newNode=new Node(data);
			if(current==NULL){
				root=newNode;
				
			}
		
			else if(isRight){
				current->right=newNode;
			}
			else{
					
				current->left=newNode;
			}
			return newNode;
			
		}
		void inOrderTraversal(Node * root){
		if(root==NULL)	{
			return;
		}
		inOrderTraversal(root->left);
		cout<<root->data<<"\t";
		inOrderTraversal(root->right);
		}
	void preOrder(Node * root){
		if(root==NULL){
			return;
		}
		cout<<root->data<<", ";
		preOrder(root->left);
		preOrder(root->right);
	}
	void postOrder(Node *root){
		if(root==NULL){
			return;
		}
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<"; ";
	}
	
		
};
int main(){
	BinaryTree bt;
Node *root = bt.addNode(NULL,1,false);
	Node *left = bt.addNode(root,2,false);
	Node *right = bt.addNode(root,7,true);
	
	Node *childLeft = bt.addNode(left,5,false);
	Node *childRight = bt.addNode(left, 4, true);
	Node *childLeft1 = bt.addNode(childLeft,3,true);
	Node *childLeft2 = bt.addNode(childRight,6,false);
	
	Node *childLeft3 = bt.addNode(right,9,false);
	Node *childRight4 = bt.addNode(right, 10, true);
	Node *childLeft5 = bt.addNode(childLeft3,11,true);
	Node *childLeft6 = bt.addNode(childRight4,3,false);
	Node *childLeft7 = bt.addNode(childRight4,15,true);
bt.inOrderTraversal(root);
cout<<endl<<"Preorderrr"<<endl;
bt.preOrder( root);
cout<<endl<<"Post order"<<endl;
bt.postOrder(root);
}

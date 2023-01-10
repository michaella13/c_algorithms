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

	Node * addNode(Node *root, int value ){
	if(root==NULL){
			root=new Node(value);
	} 
	else{
		//if root is not null
		 if (root){
		 	//if the value is less than root data
		if(value<root->data){
			//add value to root left(null)
			root->left=addNode(root->left,value);
		}	else{
		root->right=addNode(root->right,value);
	}
		
	}

	}
	return root;
}
	void inOrderTraversal(Node * root){
		if(root==NULL)	{
			return;
		}
		inOrderTraversal(root->left);
		cout<<root->data<<"\t";
		inOrderTraversal(root->right);
		}
	
	};
	int main(){
	BinaryTree bts;
Node *root = bts.addNode(NULL,10);	
	bts.addNode(root,5);
	bts.addNode(root,100);
	bts.addNode(root,3);
	bts.addNode(root,8);
	bts.addNode(root,2);
	bts.addNode(root,4);
	bts.addNode(root,7);
	bts.addNode(root,9);
	
	bts.addNode(root,200);
	bts.addNode(root,40);
	Node *root1 = bts.addNode(root,70);
	
	bts.inOrderTraversal(root);

}



#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 10
int size=-1;
struct stack{
	int items[MAX];
	int top;
};

typedef struct stack st;
void createEmpty(st *s){
	s->top=-1;
}
int isFull(st *s){
	if(s->top==MAX-1)
	return 1;
	return 0;
}
int isEmpty(st *s){
	if(s->top==-1)
	return 1;
	return 0;
}
void push(st *s,int data){
	if(isFull(s)){
		cout<<"Stack is full"<<endl;
	}else{
		s->top++;
		s->items[s->top]=data;
	}
	size++;
		
	
}
void pop(st *s){
	if(isEmpty(s)){
		cout<<"Stack empty"<<endl;
	}else{
		s->top--;
	}
	size--;
}
void display(st *s){
	if(!isEmpty(s)){
		cout<<"Stack: "<<endl;
	for(int i=size;i>=0;i--){
		cout<<s->items[i]<<endl;
	}	
	}else{
		cout<<"Stack empty"<<endl;
	}

}
int main(){
	int ch;
	
	st *s=(st *)malloc(sizeof(st));
	createEmpty(s);
	push(s,11);
	push(s,22);
	push(s,3);
	
	display(s);
}

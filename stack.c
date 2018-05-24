#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct Node{
	ElementType elem;
	struct N *Next;
};

Stack CreateStack(){
	Stack S;
	S=(Stack)malloc(sizeof(Stack_Node));
	if(S==NULL) printf("ERROR: Out of space!!!\n");
	MakeEmpty(S);
	return S;
}

int IsEmpty(Stack S){
	return S->Next==NULL;
}

void Push(Stack S,ElementType e){
	PtrToNode temp;
	temp=(Stack)malloc(sizeof(Stack_Node));
	if(temp==NULL) printf("ERROR: Out of space!!!\n");
	else{
		temp->elem=e;
		temp->Next=S->Next;
		S->Next=temp;
	}
}

ElementType GetTop(Stack S){
	if(IfEmpty(S)){
		printf("ERROR: Empty Stack.\n");
		return 0;
	}
	else{
		return S->Next->elem;
	}
}

void Pop(Stack S){
	PtrToNode temp;
	if(IfEmpty(S)) printf("ERROR: Empty Stack.\n");
	else{
		temp=S->Next->Next;
		free(S->Next);
		S->Next=temp;
	}
}

void MakeEmpty(Stack S){
	if(S==NULL) printf("Please create stack first.\n");
	else{
		while(!IfEmpty(S)){
			Pop(S);
		}
	}
}


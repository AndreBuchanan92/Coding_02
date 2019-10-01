#include "stack.h"
#include <iostream>
#include<string.h>

using namespace std;

bool Stack::push(int x, string stringid) 
{ 
    Data * newNode=new Data;
    if (top >= (STACK_SIZE)) { 
        return false; 
    } 
    else {
    	newNode->id=x;
    	newNode->data=stringid;
    	
    	stack[top++] = newNode; 
        cout << stack[top-1]->id << " pushed into stack\n"; 
        return true; 
    }
} 
  
bool Stack::pop(Data * dataPtr) 
{ 
    if (top == 0) { 
        cout << "Stack Underflow"; 
        return false; 
    } 
    else { 
    	*dataPtr=*stack[top-1];
    	free(stack[top-1]);
    	top--;
        return true; 
    } 
} 

bool Stack::peek(Data * dataPtr) 
{ 
    if (top == 0) { 
        cout << "Stack is Empty"; 
        return false; 
    } 
    else { 
		*dataPtr=*stack[top-1];
		return true; 
    } 
} 
  
bool Stack::isEmpty() 
{ 
    if (top	== 0) {
    	return true;
	}
    else {
    	return false;
	}
} 

int Stack::count() {
 
	return top;
	  }
Stack::Stack() {
	top=0;
	for(int i=0;i<STACK_SIZE;i++)
	{
		stack[i]=(Data *)malloc(sizeof(Data));
	}
}
Stack::~Stack() {
}
  



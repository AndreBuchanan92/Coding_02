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
    	newNode->data=stringid; //create struct to hold data 
    	
    	stack[top++] = newNode; //increment stack counter 
        cout << stack[top-1]->id << " pushed into stack\n"; //push pointer for the struct onto the stack
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
    	*dataPtr=*stack[top-1]; //get data from the top of the stack
    	free(stack[top-1]); //delete the allocated memory from the top of the stack
    	top--; //decrement your stack counter
        return true; //return the data to the caller 
    } 
} 

bool Stack::peek(Data * dataPtr) 
{ 
    if (top == 0) { 
        cout << "Stack is Empty"; 
        return false; 
    } 
    else { 
		*dataPtr=*stack[top-1]; //read the data from the top of the stack without popping
		return true;  //return data 
    } 
} 
  
bool Stack::isEmpty() 
{ 
    if (top	== 0) {
    	return true; //return true based on the count
	}
    else {
    	return false; //return false based on the count 
	}
} 

int Stack::count() {
 
	return top;
	  }
Stack::Stack() {
	top=0;
	for(int i=0;i<STACK_SIZE;i++)
	{
		stack[i]=(Data *)malloc(sizeof(Data)); //return number of structs in the data. I used malloc to allocate memory block 
	} 
}
Stack::~Stack() {
}
  



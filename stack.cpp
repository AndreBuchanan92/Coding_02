#include "stack.h"


bool Stack::push(int x, string stringid) 
{ 
    if (top >= (STACK_SIZE - 1)) { 
        return false; 
    } 
    else { 
        stack[++top] = x; 
        cout << x << " pushed into stack\n"; 
        return true; 
    } 
} 
  
bool pop() 
{ 
    if (top < 0) { 
        cout << "Stack Underflow"; 
        return false; 
    } 
    else { 
        int x = a[top--]; 
        return true; 
    } 
} 

bool peek() 
{ 
    if (top < 0) { 
        cout << "Stack is Empty"; 
        return 0; 
    } 
    else { 
        int x = a[top]; 
        return x; 
    } 
} 
  
bool Stack::isEmpty() 
{ 
    if (top = 0) {
    	return true;
	}
    else {
    	return false;
	}
} 

  int Stack::count() {
  	std::stack<int> myints;
	std::cout << "0. size: " << myints.size() << '\n';
  }
  

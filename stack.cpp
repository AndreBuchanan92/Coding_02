/*
public:
    // for initializing your stack
    Stack();
    // for destroying your stack, clean up your allocated memory!
    ~Stack();

    bool push(int, string);
    bool pop(Data*);
    bool peek(Data*);
    bool isEmpty();
    int count();

private:
    //do not initialize here, this is only for declaring
    int top;
    Data *stack[STACK_SIZE];
*/

#include <iostream> 
#include <stack> 

using namespace std;
  
int main () 
{ 	 
	stack<int> myStack; 
	
	myStack.push(5); 
	myStack.push(3); 
	myStack.push(2); 
	
	cout << "Number of ints on the stack " << mystack.size() << endl;
	
	while (!myStack.empty())
	cout << "popping " << mystack.top() << endl; 
	mystack.pop(); 
	
	bool push(int, string);
    bool pop(Data*);
    bool peek(Data*);
    bool isEmpty();
	
	
	
} 

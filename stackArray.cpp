/*A stack is a linear data structure in which the insertion of a new element 
and removal of an existing element takes place at the same end represented as 
the top of the stack.
LIFO data structure.
Operations:
    push()
    pop()
    top()
    isEmpty()
    size()
*/

#include <iostream>

#define MAX 100

class Stack{
    int top;

    public:
        int a[MAX];

        Stack(){top = -1;}
        bool push(int x);
        int pop();
        void peek();
        bool isEmpty();
};

bool Stack::push(int x){
    if(top >= MAX){
        std::cout<< "Stack Overflow!";
        return false;
    }
    else{
        a[++top] = x;
        return true;
    }
}

int Stack::pop(){
    if (top < 0){
        std::cout<< "Stack Underflow";
    }
    else{
        int x = a[top--];
        return x;
    }
}

void Stack::peek(){
    if(top<0){
        std::cout<<"Stack Empty";
    }
    else{
        std::cout<< a[top];
    }
}

bool Stack::isEmpty(){
    return(top < 0);
}

int main(){
    Stack s;
    s.push(100);
    s.push(12);
    s.push(321);
    
    std::cout<<s.pop()<<" poped \n";
    s.peek();
}
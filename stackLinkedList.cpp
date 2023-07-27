# include <iostream>

class Node{
    public:
        int data;
        Node* next;
};

class Stack{
    public:
        Node* top;

        void push(int data){
            if(isEmpty()){
                Node* temp = new Node();
                temp->data = data;
                temp->next = nullptr;
            }
            else{
                Node* temp = new Node();
                temp->data = data;
                temp->next = top;
                top = temp;
            }
        }

        int pop(){
            if(isEmpty()){
                std::cout<<"Stack Underflow!!";
            }
            else{
                Node* temp = new Node();
                int x = top->data;
                temp = top;
                top = top->next;
                free(temp);
                return x;
            }
        }

        int peek(){
            if(isEmpty()){
                std::cout<<"Stack empty!!";
            }
            else{
                return top->data;
            }
        }

        bool isEmpty(){
            if(top == nullptr){
                return true;
            }
            else{
                return false;
            }
        }
};
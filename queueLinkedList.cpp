#include<iostream>

class Node{
    public:
        int data;
        Node* next;
};

class Queue{
    public:
        Node* top;
        Node* bottom;

        void enqueue(int data){
            if(isEmpty()){
                Node* temp = new Node();
                temp->data = data;
                temp->next = nullptr;
                top = temp;
                bottom = temp;
            }
            else{
                Node* temp = new Node();
                temp->data = data;
                temp->next = top;
                top = temp;
            }
        }

        void dequeue(){
            if(isEmpty()){
                std::cout<< "Queue Underflow";
            }
            else{
                Node* temp = new Node();
                temp = bottom;
                bottom = bottom->next;
                free(temp);
            }
        }

        int peek(){
            if(isEmpty()){
                std::cout<< "Queue Empty";
            }
            else{
                return bottom->data;
            }
        }

        bool isEmpty(){
            if(top == nullptr && bottom == nullptr){
                return true;
            }
            else{
                return false;
            }
        }
};
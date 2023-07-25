#include <iostream>

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
};

int main(){
    Node *node1 = new Node();
    Node *node2 = new Node();
    Node *node3 = new Node();

    node1->data = 10;
    node1->next = node2;
    node1->prev = node3;
    node2->data = 11;
    node2->next = node3;
    node2->prev = node1;
    node3->data = 12;
    node3->next = node1;
    node3->prev = node2;

    Node *head = node1;

    do{
        std::cout<<head->data<<"\n";
        head = head->next;

    }while(head != node1);

}
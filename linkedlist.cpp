/*Linked is used to store items in non contiguous memory locations.
this makes it easier to add now data.*/
#include <iostream>

class Node {
public:
    int data;
    Node* next;
};

int main(){
    Node *head = new Node(); 
    Node *node1 = new Node();
    Node *node2 = new Node();
    Node *node3 = new Node();
    head->data = 10;
    head->next = node1;
    node1->data = 11;
    node1->next = node2;
    node2->data = 12;
    node2->next = NULL;

    for(node3 = head; node3 != NULL; node3 = node3->next){
        std::cout<< node3->data<< '\n';
    };


}
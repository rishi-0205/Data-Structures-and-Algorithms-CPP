#include <iostream>

class node{
    public:
    int data;
    node *left, *right;
    node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class bst{
    private:
        node* root;
        
        node* insertRecursive(node* current, int value){
            if(current == nullptr){
                return new node(value);
            }
            if(value < current->data){
                current->left =insertRecursive(current->left,value);
            }
            else if(value > current->data){
                current->right = insertRecursive(current->right, value);
            }
            return current;
        }

        bool searchRecursive(node* current, int value) {
        if (current == nullptr) {
            return false;
        }

        if (current->data == value) {
            return true;
        } else if (value < current->data) {
            return searchRecursive(current->left, value);
        } else {
            return searchRecursive(current->right, value);
        }
    }

    void inOrderTraversalRecursive(node* current) {
        if (current == nullptr) {
            return;
        }

        inOrderTraversalRecursive(current->left);
        std::cout << current->data << " ";
        inOrderTraversalRecursive(current->right);
    }

    public:
    bst() {
        root = nullptr;
    }

    void insert(int value) {
        root = insertRecursive(root, value);
    }

    bool search(int value) {
        return searchRecursive(root, value);
    }

    void inOrderTraversal() {
        inOrderTraversalRecursive(root);
        std::cout << std::endl;
    }
};



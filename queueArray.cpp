/*A Queue is defined as a linear data structure that is open at both 
ends and the operations are performed in First In First Out (FIFO) order.*/

#include <iostream>

#define MAX 100

class queue{
    int top = 0;
    int bottom = 0;
    public:
        int q[MAX];

        void enqueue(int data){
            if(top < MAX-1){
                {
                    q[top++] = data;
                }
            }
            else{
                std::cout<<"Queue Overflow!!";
            }
        }

        int dequeue(){
            if(top >= bottom){
                return q[bottom++];
            }
            else{
                std::cout << "Queue Under flow";
            }
        }

        int peek(){
            if(top >= bottom){
                return q[bottom];
            }
            else{
                std::cout << "Queue Empty";
            }
        }

        bool isEmpty(){
            if(top == bottom){
                return true;
            }
            else{
                return false;
            }
        }
};
#include <iostream>

void print(int num[][3], int x);

int main(){
    int x=3;
    
    int num[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    print(num, x);
}

void print(int num[][3], int x){
    for(int i =0; i<x; i++){
        for(int j = 0; j<3; j++){
            std::cout<< num[i][j]<< " ";
        };
        std::cout<<"\n";
    };
}
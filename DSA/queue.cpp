#include <iostream>
using namespace std;

int a[5];
int rear = -1;
int front = -1;

bool isempty(){
    if(front== -1 && rear == -1){
        return true;
    }
    else{
        return false;
    }
}

void enqueue(int x){
    if(rear == 5 -1){
        cout<<"Queue is Full!"<<endl;
    }
    else{
        if(isempty()){
            front = 0;
        }
        rear++;
        a[rear] = x;
        
    }
}

void dequeue(){
    if(isempty()){
        cout<<"Queue is Empty!"<<endl;
    }
    else if(front == 0 && rear == 0){
        front = -1;
        rear = -1;
    }
    else{
        front++;
    }
}

void showfront(){
    if(isempty()){
        cout<<"Queue is empty!"<<endl;
    }
    else{
        cout<<a[front];
    }
}

void displayqueue(){
    if(isempty()){
        cout<<"Queue is empty!"<<endl;
    }
    else{
        for(int i = 0;i<rear + 1;i++){
            cout<<a[i]<<" ";
        }
    }
}

int main(){
    enqueue(3);
    enqueue(5);
    enqueue(1);
    enqueue(4);
    enqueue(6);
    enqueue(2);
    // dequeue();
    // showfront();
    displayqueue();

return 0;
}
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* link;
};

Node* head = NULL;

void insertbeg(int x){
    Node* ptr = new Node();
    ptr->data = x;
    ptr->link = head;
    head = ptr;
}

void insertend(int x){
    Node* ptr = new Node();
    ptr->data = x;
    ptr->link = NULL;

    if (head == NULL){
        head = ptr;
    }
    else{
        Node* temp = head;
        while (temp->link != NULL){
            temp = temp->link;
        }
        temp ->link = ptr;
    }
}

void displink(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
}

int main(){
    insertbeg(3);
    insertbeg(12);
    insertbeg(7);
    insertend(45);
    insertend(90);
    displink();
return 0;
}
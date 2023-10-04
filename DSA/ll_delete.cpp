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
    if (head==NULL){
        head = ptr;
    }
    else{
    Node* temp = head;
        while (temp->link != NULL){
            temp = temp->link;
        }
    temp->link = ptr;
    }
}

void deletebeg(){
    if (head==NULL){
        cout<<"Empty LinkedList"<<endl;
    }
    else{
        Node* ptr = head;
        head = head->link;
        free(ptr);
    }
}

void displist(){
    Node* ptr = head;
    if (head==NULL){
        cout<<"Empty Linkedlist"<<endl;
    }
    else{
        while (ptr != NULL){
            cout<<ptr->data<<" ";
            ptr = ptr->link;
        }
    }
}

int main(){
  insertbeg(35);
  insertbeg(65);
  insertend(53);
  insertend(78);
  deletebeg();
  displist();

return 0;
}
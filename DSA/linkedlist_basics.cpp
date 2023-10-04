#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* link;
    };
Node *head=NULL;

int main(){
    Node* ptr = new Node();
    ptr-> data = 100;
    ptr->link = NULL;

    head = ptr;

    cout<<head->data;
return 0;
}
#include <iostream>
using namespace std;

int a[5];
int top = -1;       //initially

bool isempty(){
    if (top==-1){
        return true;
    }
    else{
        return false;
    }
}

void push(int x){
    if (top == 5 - 1){
        cout<<"Stack is Full!"<<endl;
    }
    else{
        top++;
        a[top] = x;
    }
}

void display_top(){
    cout<<a[top]<<endl;
}

void display_stack(){
    if (isempty()){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        for (int i = 0; i < top + 1; i++){
            cout<<a[i]<<" ";
        }
    }
}

void pop(){
    if (isempty()){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        a[top]=0;
        top--;
    } 
}

int main(){
    {
        push(3);
        display_top();
        push(5);
        display_top();
        push(7);
        display_top();
        push(2);
        display_top();
        // display_stack();
        push(1);
        display_top();
        pop();
        display_top();
        pop();
        pop();
        display_stack();
    }

return 0;
}
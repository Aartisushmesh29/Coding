#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int top ;
    int size;
    Stack(  int size){
        this->size = size;
         arr = new int[size];
         top = -1;


    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout <<" stack overflow\n";
        }
}
void pop(){
    if(top >= 0){
        top--;
    }
    else{
        cout<<" stack underflow";
    }
}
int peek(){
    if(top >= 0){
        return arr[top];
    }
    else{
        cout <<"stack is empty";
        return -1;
    }
}
bool isEmpty(){
    if(top == -1){
    return true;
    }
    else{
        return false;
    }
}
};
int main(){
    Stack s(20);
    s.push(22);
    s.push(25);
    s.push(30);
    s.push(29);
    cout<< s.peek()<<"\n";
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<< s.peek()<<"\n";
    
    return 0;
}
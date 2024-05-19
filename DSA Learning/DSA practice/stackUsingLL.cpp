#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node*next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
class Stack {
    Node* head;
    int size;
    int currsize;
    public:
    Stack(int c){
        this->size = c;
        this->currsize = 0;
        head = NULL;
    }    
    bool isEmpty(){
        return this->head == NULL;
    }
    bool isFull(){
        return this-> currsize == this->size;
    }
    void push(int  data){
    Node* newNode = new Node(data);
    newNode->next = this->head;
    this-> head = newNode; 
    this->currsize++;

    }
    int pop(){
        if(this->head==NULL){
            cout<< "underflow\n";
            return INT_MIN;
        }
        Node* new_head =  this-> head-> next;
        this->head->next = NULL;
        Node* tobeRemoved  = this->head;
        int result = tobeRemoved->data;
        delete this->head;
        this->head = new_head;
        return result;
    }
    int getTop(){
        if(this->head == NULL){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        return this->head->data;
    }
    int Size(){
        return this-> currsize;
    }

};
int main(){
    Stack s(20);
    s.push(22);
    s.push(25);
    s.push(30);
    s.push(29);
    cout<< s.getTop()<<"\n";
    s.push(33);
    s.push(28);
    cout<< s.getTop()<<"\n";
    s.pop();
    s.pop();
    
    cout<< s.getTop()<<"\n";
    return 0;
}
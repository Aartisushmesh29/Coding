#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    // Node*tail;
     Node(int d){
        this->data = d;
        this->next = NULL;
     }
     ~Node (){
        int val = this->data;
        if(this->next = NULL){
            delete next;
            next = NULL;
        }
     }
};
void insertNode(Node*&tail , int element, int d){
    // empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // non-empty list
        // assuming that the element is present  in the list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr-> next;

        }
        // element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr->next;
        curr->next = temp;
    }
}
void print(Node* tail){
     Node* temp = tail;
    //  empty list
     if(tail == NULL){
        cout<<"list is empty"<< endl;
     }
    do{
        cout<< tail->data<<" ";
        tail = tail->next;
     }
        while(tail != temp);
} 
void deleteNode(Node* &tail , int value){
    // empty list
    if(tail == NULL){
        cout << " list is empty , please check again" << endl;
        return;
    }
    else{
        // non empty
        // assuming that "value" is present in the linked list
        Node*curr = prev ->next;
        while(curr -> data != value){
            prev = curr;
            curr= curr->next;
        }
        prev->next = curr->next;
        // 1 node linked list
        if(curr = prev){
            tail = prev;
        }
        // >=2 node list
        else if(tail==curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    // Node* data = new Node(d);
    Node*tail = NULL;
    insertNode(tail , 5 ,3);
    print (tail);
    insertNode(tail , 3 ,5);
    print (tail);
    insertNode(tail , 5 ,3);
    print (tail);
    insertNode(tail , 7 ,9);
    print (tail);
    insertNode(tail , 3 ,5);
    print (tail);
    deleteNode( tail , 3);
    print(tail);
    return 0;
}
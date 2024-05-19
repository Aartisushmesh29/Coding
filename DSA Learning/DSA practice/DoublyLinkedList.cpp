#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    Node(int data){
        this -> data =data;
        this->prev =NULL;
        this->next =NULL;
    }
    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<< "memory is free for node with data "<< val<<endl;
    }

};
void print(Node*head){
    Node*temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;

}
// int getlength(Node*head){
//     int len = 0;
//     Node*temp = head;
//     while(temp != NULL){
//         len++;
//         temp = temp->next;
//     }
//    return len;

// }
void insertATHead(Node* &head ,Node* &tail , int d){
    // empty list
    if(head == NULL){
        Node*temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{

    Node* temp = new Node(d); 
    temp->next = head;
    head->prev = temp;
    head = temp;  
    }
}
void insertATTail(Node* &tail, Node* &head , int d){
    // empty list
    if(tail == NULL){
         Node*temp = new Node(d);
        tail = temp;
        head = temp;

    }
    else{

    Node* temp = new Node(d); 
    tail->next = temp;
    temp->prev = tail;
    tail = temp;  
    }
}
void insertAtPosition(Node* &tail ,Node* &head, int pos , int d){
    // insert at start
    if(pos == 1){
     insertATHead(head ,tail,d);
        return;
    }
    Node*temp = head;
    int cnt =1;
    while(cnt < pos-1 ){
        temp = temp->next;
        cnt++;
    }
    // inseting at last
    if(temp ->next =NULL){
        insertATTail(tail,head , d);
        return;
    }
    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
// Deletion 
void deleteNode(int pos , Node* &head){
    // deleting the first or last node
    if(pos ==1){
        
    Node* temp = head ;
    temp ->next ->prev = NULL;
    head = temp->next;
    temp -> next  = NULL;
    delete temp;
    }                         

else{
    // deleting any middle or last node
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt < pos){
        prev = curr;
        curr = curr->next;
        delete temp;
    }
    curr->next = NULL;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}
}
int main(){
    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;
    Node* tail = NULL;
    Node* head = NULL;
    print(head);
    insertATHead(head , tail,11);
    print(head);
    insertATHead(head , tail,13);
    print(head);
    insertATHead(head,tail , 8);
    print(head);
    insertATTail(tail,head , 25);
    print(head);
    insertAtPosition(tail , head , 2 ,100);
    print(head);
    insertAtPosition(tail , head , 1 ,101);
    print(head);
    insertAtPosition(tail , head , 3 ,102);
    print(head);
    cout<<"head "<< head->data<<endl;
    cout<<"tail "<< tail->data<<endl;
    // deleteNode(1 , head);
    // print(head);
    // cout<<"head "<< head->data<<endl;
    // cout<<"tail "<< tail->data<<endl;
    // deleteNode(2 , head);
    // print(head);
    // cout<<"head "<< head->data<<endl;
    // cout<<"tail "<< tail->data<<endl;
    return 0;
}
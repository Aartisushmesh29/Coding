#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node*next;

    public:
    // cnstructor
    Node(int data , Node* next){
        // data = data1;
        // next = next1;
        this->data = data;
        this->next = next; 
    }
    ~Node(){
         int value = this->data ; 
        //  memory free
        if(this -> next != NULL){
          delete next;
          this -> next = NULL;
        }
        cout << "memory is free for node with data "<< value<<endl;

    }

};
void print(Node* &head){
  Node* temp = head;
  while(temp != nullptr){
    cout << temp->data << " ";
    temp = temp->next;
  }
cout << endl;

}
Node* convertoArrToLL(vector<int> &arr){
    Node* Head = new Node(arr[0], nullptr);
    Node* mover = Head ;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover = temp;
    }
    return Head;
}
  void insertAtHead(Node* &Head , int d){

  // create new node 
  Node* temp = new Node(d , nullptr);
  temp->next = Head;
  Head = temp;
}
  void insertAtTail(Node* &tail , int d){
    // new node create
    Node* temp = new Node(d, nullptr);
    tail->next = temp;
    tail = temp;
  }
  void insertAtposition( Node*tail , Node* &Head , int pos , int d){
    // insert at start
    if(pos == 1){
      insertAtHead(Head,d);
      return;
    }
    // inserting at last 
    Node* temp = Head;
    int cnt = 1;
    while(cnt < pos -1 ){
      temp = temp -> next;
      cnt++;
    }
    if(temp->next == NULL){
      insertAtTail(tail , d );
      return;
    }
    // creation of node for d
    Node* nodetoInsert = new Node(d,nullptr);
    nodetoInsert->next = temp->next;
    temp->next = nodetoInsert;

  }

  // deletion in LL
  void deleteNode(int pos , Node*&Head){
    if(pos == 1){
      Node*temp = Head;
      Head = Head->next ;
      // memory free  // 
      temp->next = NULL;
    
      }
      else{
        // deleting at any position or last position
        Node*curr = Head;
        Node*prev = NULL;
        int cnt = 1 ;
        while (cnt < pos){
          prev = curr;
          curr = curr -> next;
          cnt++;

        }
        prev->next  = curr->next;
        curr->next = NULL;
        delete curr;
      }
  }
int main(){
    // vector<int >arr = {2,5,8,7};
    Node* y = new Node(10 , nullptr);
    // cout << y;
    // cout << y->data;
    // Node*Head = convertoArrToLL(arr);
    // cout << Head->data;
    Node*Head = y;
    Node*tail = y;
    print(Head);
    insertAtTail(tail , 12);
    print(Head);
    insertAtTail(tail , 15);
    print(Head);
    insertAtposition(tail , Head , 3 , 55);
    print(Head);
    cout << "head " << Head->data << endl;
    cout << "tail " << tail->data << endl;
    deleteNode(4, Head);
    cout<<"after deletion ";
    print(Head);
    return 0;
}
// class Node{
//     public:
//     int data;
//     Node*next ;
//     // constructor
//     Node(int data , Node* next){
//       this->data = data;
//       this->next = next ;

//     }
// };
// // array to linked list

// int  main(){
//     // creation in heap
//     Node* node1 = new Node(10, nullptr);
//     cout << node1 -> data << " ";
//     cout << node1 -> next;
// }
// // 
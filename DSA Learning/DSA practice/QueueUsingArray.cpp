#include<bits/stdc++.h>
using namespace std;

class Queue{
    int* arr;
    int front;
    int rear;
    int size;
public:
    Queue(){
        size = 10001;
        front = 0;
        rear = 0;
        arr = new int [size];
    }
    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }
    void Enqueue(){
        if(rear  == size){
            cout<<"full\n";
        }
        else{
            arr[rear] = data;
            rear++;
        }
    } 
    int Dequeue(){
       if(front == rear){
        cout<<"empty\n";


}
      else{
        int ans = arr[front];
        arr[front] = -1;
        front ++;
        if(front == rear){
            front = 0;
            rear = 0;
        }
        return ans;
      }



        
    }
    int front(){
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }
}
int main(){
    
    
    return 0;
}
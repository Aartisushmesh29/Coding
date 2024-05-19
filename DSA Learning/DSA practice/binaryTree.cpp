#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data ;
    node*left ;
    node*right ;
node(int d){
    this->data = d;
    this->left = NULL;
    this->right = NULL;
}
};
node* buildTree(node*root){
    cout<<"Enter the elements of tree";
    int  data;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;

    }
    cout<<"\nEnter the left elemnts of tree  : ";
    root -> left = buildTree(root->left);
    cout<<"\nEnter the right elemnts of tree : ";
    root -> right = buildTree(root->left);

    return root;
}
int main(){
    node*root = NULL;
    root = buildTree(root);
    
    return 0;
}
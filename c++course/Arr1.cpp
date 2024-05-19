#include<iostream>
#include<climits>
using namespace std;
// int main(){
//      int n;
    
//    cout<<("entr size of array\n");
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n; i++){
//         cout<<arr[i]<<" ";
 
 
//     }
    
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxNo=INT_MIN;
//     int minNo=INT_MAX;


//     for(int i=0;i<n;i++){
//         maxNo=max(maxNo,arr[i]);    //max and min are builtin functions 
//         minNo=min(minNo,arr[i]);

//     }
//     cout<<maxNo<<" "<<minNo<<endl;
// }
// linear search in array
// int linearSearch(int arr[],int n, int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<linearSearch(arr,n,key)<<endl;
// }
int BinarySearch(int arr[],int n, int key){

    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return key;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
        
    
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<BinarySearch(arr,n,key)<<endl;
}

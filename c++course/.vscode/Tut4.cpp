#include<iostream>
#include<climits>
using namespace  std;
// int getMax(int num[],int n)
// {
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(num[i]>max){
//             max=num[i];
//         }
//     }
//     return max;
// }
// int getMin(int num[],int n)
// {
//     int min=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(num[i]<min){
//             min=num[i];
//         }
//     }
//      return min;
// }
   
//     int main(){
//         int size;
//         cin>>size;
//         int num[100];
//         for(int i=0;i<size;i++){
//             cin>>num[i];
//         }
//         cout<<"maximum value is " << getMax(num,size) << endl;
    //     cout<<"minimum value is " << getMin(num,size) << endl;
    // }
// namespace name
//scope
// int add(int arr[],int size){
//     int sum =0;
//     for(int i=0;i<size;i++){
//         sum=sum+arr[i];
//     }
//     return sum;
// }
// int main(){
//     int arr[100],size;
//     cout<<"enter the size of an array "<<endl;
//     cin>>size;
//     cout<<"enter array elements "<<endl;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     int ans=add(arr,size);
//     cout<<"sum of array elements is "<<ans<<endl;
//     return 0;
// }
//linear search
// bool search( int arr[] , int size , int key){
//      for (int i=0;i<size;i++){
//        if(arr[i]==key){
//         return 1;
//        } 
//      }
//   return 0;
// }
// int main(){
//     int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
//     cout<<"Enter the elements to search for "<<endl;
//     int key;
//     cin >>key;
//    bool found = search(arr,10,key);
//    if (found){
//     cout<<" Key is present"<<endl;

//    }
//    else{
//     cout<<"Key is absent"<<endl;
//    }
//    return 0;
// }
//Reverse an array
// void reverse(int arr[],int n){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         swap( arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
void printArray( int arr[],int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// int main(){
//     int arr[6]={1,4,0,5,-2,15};
//     int brr[5]={2,6,3,9,4};
//     reverse(arr,6);
//     reverse(brr,5);
//     printArray(arr,6);
//     printArray(brr,6);
//     return 0;
//}
void reverseAlter(int arr[],int n){
  
   for(int i=0;i<=n;i=i+2){
    if(i+1<n)
        swap( arr[i],arr[i+1]);
    }
} 
int main(){
   int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,6,3,9,4};
     reverseAlter(arr,6);
   reverseAlter(brr,5); 
     printArray(arr,6);
   printArray(brr,5);
 
     return 0;
}
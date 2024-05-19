#include <iostream>
using namespace std;
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        /* code */cout<<arr[i]<<" ";
    }cout<<endl;
    
}

// void swapAlternate (int arr[],int size){
//     for (int i = 0; i < size; i+=2){
//         if (i+1< size){
//             swap(arr[i],arr[i+1]);
//         }
//     }
   
    
// }
// int main(){

//        int even[8]={5,2,9,4,7,6,1,8};
//        int odd[5]={11,33,9,76,43};
//        swapAlternate(even,8);
//        printArray(even,8);
// }
//sort 0 1
void sortOne(int arr[],int n){
    int left = 0;
    int right = n-1;
    while(left < right){

    while(arr[left] == 0 && left <right){
        left++;
    }
    while( arr[right]==1 && left <right){
        right--;
    }
    swap(arr[left],arr[right]);
    left++;
    right--;
    }
}
int main()
{
  int arr[10] = {0, 1, 0,0,0,1, 1,1};
  sortOne(arr ,10);
  printArray(arr,10);
}

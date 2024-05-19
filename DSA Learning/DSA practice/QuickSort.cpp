#include<bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int s, int e){
    // base case
    if(s>=e){
        return;
    }
    int p = partition(arr, s, e);
    // left part sort
    quickSort(arr,s,e);
    // right part sort
    quickSort(arr,p+1,e);



}

int partition(int arr , int s, int e){
    int pivot = arr[s];
    int count = 0;
    for (int  i = s+1; i <= e; i++)
    {
        /* code */
        if(arr[i]<pivot)
        count ++;
    }
    // place pivot at right place
    int pivotIndex = s+ count;
    swap(arr[pivotIndex] , arr[s]);

    int i = s, j = e;
    while( i< pivotIndex && j > pivotIndex){
        while(arr[i] < = pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if ( i < pivotIndex && j > pivotIndex){
            swap( arr[i] , arr[j]);
            i++;
            j--;
        }
    }
    
}
int main(){
     int arr[5] = {2,4,1,6,5};
     int n = 5;
     quickSort(arr , 0 , n-1);
     for( int i = 0; i <n; i++){
        cout << arr[i] << " ";
     }
     cout << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector <int> &arr , int n){
        for(int i = 1 ; i < n ; i++){
            // for round 1 to n-1
            // if we start first loop from 0 to n-1 ,then j loop will start from 0 to n-i-1.
            for(int j = 0; j < n-i ; j++){
                // process element til n-ith index 
                if(arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
            } 
        }
}
// ***OPTIMIZED CODE***
void BubbleSort(vector <int> &arr , int n){
        for(int i = 1 ; i < n ; i++){
            // for round 1 to n-1
            // if we start first loop from 0 to n-1 ,then j loop will start from 0 to n-i-1.
            bool swapped = false;
            for(int j = 0; j < n-i ; j++){
                // process element til n-ith index 
                if(arr[j] > arr[j+1]){
                
                swap(arr[j],arr[j+1]);
                swapped = true;
                }
            } 
            if(swapped = false)
            {
                // already sorted 
                break;
            }
        }
}
int main(){
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;


void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i = 0, j = 0;
    int k = 0;
    while(i<n && j <m){
        if(arr1[i] < arr2[j]){
        arr3[k++] = arr1[i++];
        // OR 
        // arr3[k] = arr[i]
        // k++;
        // i++;
    }
    else{
       
        arr3[k++] = arr2[j++];
    }

    } 
    // copy first array  k element ko
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    // copy first array  k element ko
    while(j<m){
        arr3[k++] = arr2[j++];
    }
}

void Print(int ans[] ,int n){
    for(int i = 0; i< 10; i++){
        cout<< ans[i]<< " ";
    }
    cout << endl;
}
int main(){
    int arr1[7] = {1,2,3,6,8,9,10};
    int arr2[3] = {5,7,11};
    int arr3[10] ={0};
    merge(arr1, 7, arr2,3,arr3);
    Print(arr3 , 8);
    return 0;
}
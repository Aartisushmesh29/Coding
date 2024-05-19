#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr, int n){
    for(int i=0; i<n-1;i++){
       int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            /* code */
            if(arr[j] < arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex] , arr[i]);
        
    }
}
int main(){
    vector<int> arr;
    int size = 5;
    cout << "Enter values : " ;
    for(int i = 0 ; i < 5 ; i++){
        int k;
        cin >> k;
        arr.push_back(k);
    }
    for(auto i:arr){
        cout << i << " " ; 
    }
    cout<<endl;
    selectionSort(arr , 5);
    for(auto i:arr){
        cout << i << " " ; 
    }
    return 0;
}
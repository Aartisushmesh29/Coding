#include<bits/stdc++.h>
using namespace std;

// void RRotate(vector<int>&v){
void RRotate(int arr[] , int n){
    // int n = v.size();
    // vector<int>temp(n);
    int temp[n];
    for(int i = 0; i<n-1; i++){
        temp[i+1] = arr[i];
    }
    temp[0] = arr[n-1];
    for(int i =0; i<n; i++){
        cout<< temp[i]<< " ";
    }
    cout << endl;
}
int main(){
     int arr[5] = {1,2,3,4,5};
     int n = 5;
     cout << "Array before rotation"<<endl;
     for(auto i : arr){
        cout << i <<" ";
     }
     cout << endl;
    cout<< "Right rotated array is"<< endl;
    RRotate(arr,5);

    return 0;
}
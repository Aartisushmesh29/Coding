#include<bits/stdc++.h>
using namespace std;
// pass by value
// void update(int n){
    // n++;
// }
// pass by reference 
// void update(int &n){
//     n++;
// }
// int& func(int a){
//     int  num = a;
//     int& ans = num;
//     return ans;
// }
// int* func(int n){
//     int*ptr = &n;
//     return ptr;
// }

int getSum(int *arr , int n){
    int sum =0 ;
    for(int i =0; i <n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    // int i = 5 ;
    // // create a ref variable
    // int &j  = i ;
    // cout << i<< endl;
    // i++;
    // cout << i<< endl;
    // j++;
    // cout << i<< endl;
    // cout << j<< endl;
    // i 
    // cout <<" After "<< n << endl;


// Dynamic memory allocation
int n;
cin >> n;
// variable size array
int* arr = new int[n];
// taking input  in array
 for(int i = 0; i <n; i++){
    cin >> arr[i];
 }
 int ans = getSum(arr,n);
 cout << "answer is "<< ans<< endl;
    return 0;
}
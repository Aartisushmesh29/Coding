#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int arr[n];
    // map<int , int> mpp;
    unordered_map<int , int> mpp;
    for(int  i = 0; i <n; i++){
        cin >>arr[i];
        mpp[arr[i]]++;

    }
    // pre compute
    // int hash[13] = {0};
    // for(int i = 0; i < n; i++){
    //     hash[arr[i]] +=1;
    // }
    // map --> pre compute
    // map<int , int> mpp;
    // for(int i = 0; i< n; i++){
    //     mpp[arr[i]]++;
    // }
    // iterate in  the map
    // for(auto it : mpp){
    //     cout << it.first << "-->"<< it.secont <<endl;
    // }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin >> number;
        // fetch
        // cout<< hash[number] <<endl; 
        cout<< mpp[number] <<endl; 
    }
    return 0;
}
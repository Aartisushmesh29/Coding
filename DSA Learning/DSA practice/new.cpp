#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n , m , k;
        cin>>n>>m>>k;
        int arr1[n];
        for(int i = 0 ; i<n; i++ ){
            cin >> arr1[i];
        }
        int arr2[m];
        for(int i = 0 ; i<m; i++ ){
            cin >> arr2[i];
        }
        int count = 0;
        for(int i = 0 ;i < n ; i++){
            for(int j = 0 ; j < m; j++){
                int sum = arr1[i] +arr2[j];
                if(sum <= k){
                    count ++;
                }

            }
        }
        cout<< count;
    }
    return 0;
}
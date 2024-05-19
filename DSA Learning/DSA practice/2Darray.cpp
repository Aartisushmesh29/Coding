#include<bits/stdc++.h>
using namespace std;
  

// linear search
// bool isPresent(int arr[][4] , int target , int row , int col){
//     for(int i = 0 ; i< 3 ; i++){
//        for(int j = 0; j < 4; j++ ){
//         if(arr[i][j] == target){
//             return 1 ;
//         }
//        }
//     }
//     return 0;
// }
 

//  Row wise sum 
// void RowSum(int arr[][4], int row ,int col){
//     for( int i = 0 ; i<3; i++){
//         int sum =0;
//         for(int j = 0; j<4; j++){
//             sum+=arr[i][j];
//         }
//         cout<<sum<<" ";
//     }
// }
void largestSumRow(int arr[][4], int row ,int col){
    int maxi =INT_MIN;
    for( int i = 0 ; i<3; i++){
        int sum =0;
        for(int j = 0; j<4; j++){
            sum+=arr[i][j];
            maxi = max(sum,maxi);
        }
        cout<<sum<<" ";
        
    }
        cout<<maxi;
}
int main(){
    // created 2d array
        int arr[3][4];
        // int arr[3][4] = {1,2,3,45,6,7,7,8,9,10,11,12};
        

        // takimg input -->row wise input
        cout<<"enter elements\n";

        for(int row = 0; row<3; row++){
           for(int col =0 ; col <4 ; col++){
            cin>>arr[row][col];
         }
        }
        // int target;
        // cin>>target;
        // taking input --> colwise input
        // for(int col = 0; col<4; col++){
        //    for(int row =0 ; row <3 ; row++){
        //     cin>>arr[col][row];
        //  }
        // }
// 
        // printing 2d arraay

        for(int row = 0; row<3; row++){
           for(int col =0 ; col <4 ; col++){
            cout<<arr[row][col]<<" ";
         }
         cout<<"\n";
        
        }
        // RowSum(arr,3,4);
        largestSumRow(arr,3,4);
        // search element in 2d array
    //  if(isPresent(arr, target ,3,4)){
    //     cout<<"element is found";
    //  }
    // else{
    //     cout<<"element is not found";
    // }
        

    return 0;
}
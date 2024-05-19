#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN; // maxi
    int i = 0;
    int sum = 0;
    for(int j = i ; j< n; j++){
        sum = sum +arr[j];
        maxi = max(sum, maxi);
    }
    i++;
    return maxi;
}
int main(){
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

// Function to check if the array can be sorted with a fixed K
bool canSortWithK( int K,const std::vector<int>& arr) {
    int N = arr.size();
    std::vector<int> sortedArr(arr);
    std::sort(sortedArr.begin(), sortedArr.end());
    
    for (int i = 0; i < N; ++i) {
        // Skip the Kth position and already sorted elements
        if (i == K - 1 || arr[i] == sortedArr[i]) continue;
        
        // Find the index of the element that should be at the current position
        auto it = std::find(sortedArr.begin(), sortedArr.end(), arr[i]);
        int correctPos = std::distance(sortedArr.begin(), it);
        
        // If the correct position is K or the element at the correct position is already sorted, return false
        if (correctPos == K - 1 || arr[correctPos] == sortedArr[correctPos]) {
            return false;
        }
    }
    return true;
}

// Function to count the number of valid Ks
int countValidKs(const std::vector<int>& arr) {
    int count = 0;
    for (int K = 1; K <= arr.size(); ++K) {
        if (canSortWithK(arr, K)) {
            ++count;
        }
    }
    return count;
}

int main() {
    std::vector<int> arr = {1, -6, -5, -12, 1, 3, 8, -3}; // Example array
    std::cout << "Count of distinct K values: " << countValidKs(arr) << std::endl;
    return 0;
}

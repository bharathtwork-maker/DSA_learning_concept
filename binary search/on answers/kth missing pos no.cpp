#include <iostream>
#include <vector>

using namespace std;

// Function to find the k-th missing positive number using Binary Search
int findKthPositive(vector<int>& arr, int k) {
    int low = 0, high = arr.size() - 1;
    
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        
        // Calculate how many numbers are missing up to index 'mid'.
        // In a continuous sequence, the value at index 'mid' should be (mid + 1).
        // The difference gives the count of missing numbers so far.
        int missing = arr[mid] - (mid + 1);
        
        if (missing < k) {
            // If missing numbers are fewer than k, the k-th missing number is further right
            low = mid + 1;
        } else {
            // Otherwise, it lies to the left
            high = mid - 1;
        }
    }
    
    // After binary search finishes, 'low' points to the correct insertion index,
    // and adding 'k' gives the exact value of the k-th missing number.
    return low + k;
}

int main() {
    // Example test case
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    
    int result = findKthPositive(arr, k);
    
    cout << "The " << k << "-th missing positive number is: " << result << endl;
    
    return 0;
}
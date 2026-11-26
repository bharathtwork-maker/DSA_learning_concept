#include<bits/stdc++.h>
using namespace std;

// Counts how many subarrays are needed if no single subarray sum exceeds `mid`
int ispossible(vector<int>& a, int mid) {
    int list = 1;   // Start with 1 subarray (partition)
    int pages = 0;  // Running sum of the current subarray

    for (int i = 0; i < (int)a.size(); i++) {
        // If adding a[i] exceeds the allowed max sum `mid`, start a new subarray
        if (a[i] + pages > mid) {
            list += 1;
            pages = a[i];
        } else {
            pages += a[i];
        }
    }
    return list;
}

// Finds the minimum possible largest subarray sum when splitting `nums` into `k` parts
int splitArray(vector<int>& nums, int k) {
    // Smallest possible max sum is the largest single element in `nums`
    int low = *max_element(nums.begin(), nums.end());
    // Largest possible max sum is the sum of all elements (1 subarray)
    int high = accumulate(nums.begin(), nums.end(), 0);

    // Binary search over the answer space [low, high]
    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoids potential overflow vs (low + high) / 2

        // Too many subarrays needed -> `mid` is too small, search higher
        if (ispossible(nums, mid) > k) {
            low = mid + 1;
        } else {
            // `mid` is valid (uses <= k subarrays), try to find an even smaller max sum
            high = mid - 1;
        }
    }

    // `low` converges to the smallest valid maximum subarray sum
    return low;
}

int main() {
    // Test Case 1
    vector<int> nums1 = {7, 2, 5, 10, 8};
    int k1 = 2;
    cout << "Test 1 Output: " << splitArray(nums1, k1) << endl; // Expected: 18

    // Test Case 2
    vector<int> nums2 = {1, 2, 3, 4, 5};
    int k2 = 2;
    cout << "Test 2 Output: " << splitArray(nums2, k2) << endl; // Expected: 9

    return 0;
}
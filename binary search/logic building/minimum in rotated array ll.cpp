#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
    int low = 0 , high = nums.size()-1;
    int mini = INT_MAX;

    while(low <= high)
    {
        long long mid = low + (high - low) / 2;
        mini = min(mini , nums[mid]);

        // If duplicates match at boundaries, shrink the search space safely
        if(nums[low] == nums[mid] && nums[mid] == nums[high])
        {
            low++;
            high--;
            continue;
        }

        if(nums[low] <= nums[mid])
        {
            mini = min(mini , nums[low]);
            low = mid + 1;
        }
        else 
        {
            mini = min(mini , nums[mid]);
            high = mid - 1;
        }
    }
    return mini;
}

int main() {
    // Test cases
    vector<int> nums1 = {1, 3, 5};
    vector<int> nums2 = {2, 2, 2, 0, 1};

    cout << "Minimum in nums1: " << findMin(nums1) << endl;
    cout << "Minimum in nums2: " << findMin(nums2) << endl;

    return 0;
}
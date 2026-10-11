#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int ans = nums.size();

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] >= target) {
                ans = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Test cases based on the problem description
    vector<int> nums1 = {1, 3, 5, 6};
    int target1 = 5;
    cout << "Target " << target1 << " insert index: " << sol.searchInsert(nums1, target1) << " (Expected: 2)" << endl;

    vector<int> nums2 = {1, 3, 5, 6};
    int target2 = 2;
    cout << "Target " << target2 << " insert index: " << sol.searchInsert(nums2, target2) << " (Expected: 1)" << endl;

    vector<int> nums3 = {1, 3, 5, 6};
    int target3 = 7;
    cout << "Target " << target3 << " insert index: " << sol.searchInsert(nums3, target3) << " (Expected: 4)" << endl;

    return 0;
}
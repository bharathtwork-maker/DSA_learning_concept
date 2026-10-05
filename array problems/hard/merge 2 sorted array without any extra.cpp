/*class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left = m-1;
        int right = 0;

        while(left >= 0 && right < n)
        {
            if(nums1[left] > nums2[right])
            {
                swap(nums1[left] , nums2[right]);
                left--;
                right++;
            }
            else
            break;
        }
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
    }
};*/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = n + m;
        int gap = (len / 2) + (len % 2);

        while (gap > 0) {
            int left = 0;
            int right = left + gap;

            while (right < len) {
                if (left < m && right >= m) {              //left is in first array and right is in second array
                    if (nums1[left] > nums2[right - m]) {
                        swap(nums1[left], nums2[right - m]);
                    }
                }
                else if (left >= m) {                         //left and right are in second array
                    if (nums2[left - m] > nums2[right - m]) {
                        swap(nums2[left - m], nums2[right - m]);
                    }
                }
                else {                                      //left and right are in first array
                    if (nums1[left] > nums1[right]) {
                        swap(nums1[left], nums1[right]);
                    }
                }
                left++;
                right++;
            }
            
            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2);
        }

        // Copy elements of nums2 back into the remaining space of nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};

int main() {
    Solution solver;

    // Test case inputs
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    // Call the merge function
    solver.merge(nums1, m, nums2, n);

    // Print the output array
    cout << "Merged nums1: [";
    for (size_t i = 0; i < nums1.size(); i++) {
        cout << nums1[i];
        if (i + 1 < nums1.size()) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
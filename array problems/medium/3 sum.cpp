#include<bits/stdc++.h>
using namespace std; // Added so 'vector' and 'cout' work locally in VS Code

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++)
        {
            // Prevent duplicate triplets for the same 'i'
            if(i > 0 && nums[i] == nums[i-1]) //if i is same as the previos we have to set it to a new number
                continue;
                
            int j = i + 1;
            int k = n - 1;
            
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                
                if(sum > 0)
                {
                    k--;
                }
                else if(sum < 0)
                {
                    j++;
                }
                else
                {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    
                    // Skip duplicates for j
                    while(j < k && nums[j] == nums[j-1])
                    {
                        j++;
                    }
                    // Skip duplicates for k
                    while(j < k && nums[k] == nums[k+1])
                    {
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};

int main() {
    // Instantiate the Solution class
    Solution solution;
    
    // Setup the test case that was giving you trouble
    vector<int> nums = {0, 0, 0, 0};
    
    // Call the function
    vector<vector<int>> result = solution.threeSum(nums);
    
    // Print the results to the console
    cout << "Output: [";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]\n";

    return 0;
}
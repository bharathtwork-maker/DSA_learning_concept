#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        vector<vector<int>> ans;

        for(int i=0 ; i<n ; i++)
        {
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1 ; j<n ; j++)
            {
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int k = j+1 , m = n-1;
                while(k<m)
                {
                    long long sum = nums[i] + nums[j] ;
                    sum += nums[k];
                    sum += nums[m];

                    if(sum > target)
                    {
                        m--;
                    }
                    else if(sum < target)
                    {
                        k++;
                    }
                    else
                    {
                        vector<int> temp = {nums[i] , nums[j] ,nums[k] ,nums[m]};
                        ans.push_back(temp);
                        k++;
                        m--;

                        while(k<m && nums[k]==nums[k-1])
                        {
                            k++;
                        }
                        while(k<m && nums[m]==nums[m+1])
                        {
                            m--;
                        }
                    }
                }
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> arr = {1,0,-1,0,-2,2};
    int target = 0;

    Solution s;
    vector<vector<int>> a = s.fourSum(arr, target);

    for(int i=0 ;i<a.size() ;i++)
    {
        for(int j=0 ; j<a[i].size() ; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
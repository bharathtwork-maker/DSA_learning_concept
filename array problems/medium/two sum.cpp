#include<bits/stdc++.h>
using namespace std;

/*vector<int> twosum(vector<int>& nums , int target)   //brute force approach
{
        for(int i=0 ; i<nums.size() ; i++)
        {
            for(int j=1 ; j<nums.size() ; j++)
            {
                if(nums[i] + nums[j] == target)
                return {i , j};
            }
        }
        return {};
}
*/

//better approach by using hash mapping 
vector<int> twosum_better(vector<int>& a , int target)
{
    int more;
    map<int , int> m;
    for(int i=0 ;i<a.size() ; i++)
    {
        int num = a[i];
        more = target - num;
        
        if(m.find(more) != m.end())
        {
            return {m[more] , i};
        }
        m[num] = i;
    }
    return {-1 , -1};
}

string twosum_opt(vector<int>& a , int target)    //two pointer approach and optimal only if they ask to return yes or no if they ask to return the index then the better solution is the optimal solution
{
    sort(a.begin() , a.end());
    int n = a.size();
    int left = 0 , right = n-1;
    int sum;

    while(left < right)
    {
        sum = a[left] + a[right];

        if(sum == target)
        return "yes";
        
        if(sum < target)
        left ++;
        else
        right--;
    }
    return "no";
}

int main()
{
    vector<int> a = {2,7,11,15};
    int target = 9;

    vector<int> result = twosum_better(a , target);
    cout<<"["<<result[0]<<"," <<result[1]<<"]"<<endl;

    string res = twosum_opt(a , target);
    cout<<res;

    return 0;

}
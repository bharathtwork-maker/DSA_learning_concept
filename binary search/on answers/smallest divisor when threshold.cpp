#include<bits/stdc++.h>
using namespace std;

int sumofd(vector<int>& arr , int div)
    {
        int sum = 0;
        int n = arr.size();

        for(int i=0 ; i<n ; i++)
        {
            sum += ceil((double) arr[i] / (double) div);         //it rounds off the decimal to +1 like 3.32 to 4 or 6.22 to 7
        }
        
        return sum;
    }

int smallestDivisor(vector<int>& nums, int threshold) {
    int low =  1, high = *max_element(nums.begin() , nums.end());

    while(low <= high)
    {
        long long mid = low + (high - low) / 2;

        if(sumofd(nums , mid) <= threshold)     //if any number for mid is less than threshold then the divisor we want should be the smallest so we go to left
        {
            high = mid - 1;
        }
        else 
        {
            low = mid + 1;
        }
            
    }
    return low;     //if we want the minimum or lowest or smallest then the answer is simply the low or high
    }

int main()
{
    vector<int> a = {1,2,5,9};
    int threshold = 6;
    cout<<smallestDivisor(a , threshold);
    return 0;
}
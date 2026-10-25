#include<bits/stdc++.h>

using namespace std;

// Helper function to check if we can make at least 'm' bouquets
// in 'mid' days, where each bouquet requires 'k' adjacent flowers.
bool mini(vector<int>& a, int mid, int m, int k)
{
    int boq = 0, cnt = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] <= mid)
        {
            cnt++;
        }
        else
        {
            boq += cnt / k;
            cnt = 0;
        }
    }
    boq += cnt / k;
    return boq >= m;
}

// Function to find the minimum number of days to make m bouquets
int minDays(vector<int>& bloomDay, int m, int k) {
    int low = *min_element(bloomDay.begin(), bloomDay.end()), high = *max_element(bloomDay.begin(), bloomDay.end());

    while (low <= high)
    {
        long long mid = low + (high - low) / 2;

        if (mini(bloomDay, mid, m, k))
        {
            high = mid - 1; // Try to find a smaller valid day
        }
        else
        {
            low = mid + 1;  // Increase the days if current mid is insufficient
        }
    }
    if (low <= *max_element(bloomDay.begin(), bloomDay.end()))
        return low;
    return -1;
}

int main() {
    // Example test case
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3;
    int k = 1;

    int result = minDays(bloomDay, m, k);
    
    cout << "Minimum days required: " << result << endl;

    return 0;
}
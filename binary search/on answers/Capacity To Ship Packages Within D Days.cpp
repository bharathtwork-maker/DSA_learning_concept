#include<bits/stdc++.h>
using namespace std;

int capacity(const vector<int>& a, int mid) {
    int day = 1;
    int load = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] + load > mid) {
            load = a[i];
            day++;
        } else {
            load += a[i];
        }
    }
    return day;
}

int shipWithinDays(vector<int>& weights, int days) {
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        int cap = capacity(weights, mid);
        if (cap <= days) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    
    int result = shipWithinDays(weights, days);
    cout << "Minimum capacity needed: " << result << endl;
    
    return 0;
}
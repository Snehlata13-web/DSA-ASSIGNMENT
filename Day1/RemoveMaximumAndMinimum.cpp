#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Remove Minimum and Maximum from array with minimum deletions.
    Logic : The algorithm calculates the indices of the minimum and maximum elements and calculate three possible deletion ways to find the minimum number of deletions.
    1. Deleting both from the front.
    2. Deleting both from the back.
    3. Deleting one from the front and one from the back.
    Time Complexity : O(n)
    Space Complexity : O(1)
    
*/
int minDeletions(vector<int> &arr) {
    int n = arr.size();
    int mini = min_element(arr.begin(), arr.end()) - arr.begin();
    int maxi = max_element(arr.begin(), arr.end()) - arr.begin();

    if (mini > maxi) swap(mini, maxi);
    int front = maxi + 1;
    int back = n - mini;
    int both = (mini + 1) + (n - maxi);
    return min({front, back, both});
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {2, 10, 7, 5, 4, 1, 8, 6};
    cout << minDeletions(arr)<<endl;
    return 0;
}
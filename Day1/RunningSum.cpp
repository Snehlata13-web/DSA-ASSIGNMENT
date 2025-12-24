#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Running Sum of 1d Array
    Logic : The algorithm calculates the running sum by traversing through the array and adding the current element to the previous sum.
    Time Complexity : O(n)
    Space Complexity : O(n)
*/
vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);
    ans[0] = nums[0];
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] + nums[i];
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> ans = runningSum(arr);
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}
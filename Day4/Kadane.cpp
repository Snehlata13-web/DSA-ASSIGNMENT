#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Maximum Subarray Sum (Kadane's Algorithm)
    Logic : The algorithm iterates through the array, maintaining a running sum of the current subarray. If the running sum becomes negative, it resets to zero. The maximum sum encountered during the iteration is tracked and returned as the result.
    Time Complexity : O(n)
    Space Complexity : O(1)
    Submission Link : 
*/
int maxSubArray(vector<int> &nums)
{
    int ans = INT_MIN;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        ans = max(ans, sum);
        if (sum < 0)
            sum = 0;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(nums) << endl;
    return 0;
}
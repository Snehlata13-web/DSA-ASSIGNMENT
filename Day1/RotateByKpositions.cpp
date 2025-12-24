#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Rotate Array by K positions to the right
    Logic : The Algorithm reverses the entire array, then reverses the first K elements, and finally reverses the remaining elements to achieve the desired rotation.
    Time Complexity : O(n)
    Space Complexity : O(1)
    
*/
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; 
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);
    cout << "Rotated Array: ";
    for (int num : nums) cout << num << " ";
    cout << endl;
    return 0;
}
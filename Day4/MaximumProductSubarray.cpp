#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Maximum Product Subarray (brute force approach)
    Logic : The algorithm iterates through all possible subarrays, calculating their products and keeping track of the maximum product found.
    Time Complexity : O(n^2)
    Space Complexity : O(1)
*/
int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int ans= INT_MIN;
    for (int i = 0; i < n; i++) {
        int product = 1;
        for (int j = i; j < n; j++) {
            product *= nums[j];
            maxProduct = max(maxProduct, product);
        }
    }
    return maxProduct;
}

/*
    Problem : Maximum Product Subarray (optimal approach)
    Logic : The algorithm maintains two variables to track the maximum and minimum products up to the current position, updating them based on the current element. This is necessary because a negative number can turn a minimum product into a maximum product.
    Time Complexity : O(n)
    Space Complexity : O(1)
    Submission Link :
*/

int maxProduct(vector<int>& nums) {
    if(nums.size()==0){
        return 0;
    } 
    int maxi =nums[0];
    int mini=nums[0];
    int result = maxi;
    for(int i =1;i<nums.size();i++){
        int curr = nums[i];
        int temp = max ( curr , max(maxi*curr,mini*curr));
        mini = min(curr, min(maxi*curr,mini*curr));
        maxi = temp;

        result = max(result, temp);
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {2, 3, -2, 4};
    cout << "Maximum Product Subarray: " << maxProduct(nums) << endl;
    return 0;
}

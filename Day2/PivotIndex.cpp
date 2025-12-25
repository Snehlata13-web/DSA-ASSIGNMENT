#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Find the Pivot Index of an array
    Logic : The algorithm calculates the total sum of the array and iterates through the array while maintaining a running sum of the left side. At each index, it checks if the left sum is equal to the total sum minus the left sum minus the current element (which gives the right sum). If they are equal, it returns the current index as the pivot index.
    Time Complexity : O(n)
    Space Complexity : O(1)
    Submission link : 
*/
int pivotIndex(vector<int>& nums) {
    int tSum = accumulate(nums.begin(), nums.end(), 0);
    int lSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (lSum == tSum - lSum - nums[i]) {
            return i;
        }
        lSum += nums[i];
    }
    return -1;       
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {1,7,3,6,5,6};
    cout<<"Pivot Index is: "<<pivotIndex(nums)<<endl;
    return 0;
}
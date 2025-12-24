#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Sum of Maximum elements
    Logic :  The Algorithm uses Hashing to store frequency of elements and then iterates through the map to find the maximum element and its frequency and if multiple maximums exist, it sums them up.
    Time Complexity : O(N) where N is the number of elements in the array.
    Space Complexity : O(N) for storing the frequency map.
*/
int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int,int> mpp;
    int maxi = INT_MIN;
    int sum = 0;
    for (int num : nums) {
        mpp[num]++;
        if (num > maxi) {
            maxi = num;
        }
    }
    sum = maxi * mpp[maxi];
    return sum;       
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {1, 3, 2, 3, 4, 4, 4};
    cout << "Sum of maximum elements: " << maxFrequencyElements(nums) << endl;
    return 0;
}
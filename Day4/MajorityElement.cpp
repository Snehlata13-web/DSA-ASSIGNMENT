#include <bits/stdc++.h>
using namespace std;

 /*
    Problem : Majority Element (brute force approach)
    Logic : The algorithm checks each element and counts its occurrences in the array. If the count exceeds n/2, it returns that element as the majority element.
    Time Complexity : O(n^2)
    Space Complexity : O(1)
*/
int majorityElement(vector<int>& nums) {
    int n = nums.size();
    for(int i =0;i<n;i++){
        int count =0;
        for(int j =0;j<n;j++){
            if(nums[i]==nums[j]){
                count++;
            }
        }
        if(count>n/2){
            return nums[i];
        }
    }
    return -1;
}

/*
    Problem : Majority Element (optimal approach)
    Logic : The algorithm uses the Boyer-Moore Voting Algorithm to find the majority element in linear time. It maintains a count of the current candidate and updates it whenever the count reaches zero. The final candidate is the majority element.
    Time Complexity : O(n)
    Space Complexity : O(1)
    Submission Link :
*/
int majorityElement(vector<int>& nums) {
    int ele = nums[0];
    int cnt =0;
    for(int i =0;i<nums.size();i++){
        if(cnt==0){
            ele = nums[i];
        }
        if(nums[i]==ele){
            cnt++;
        }
        else if (nums[i]!=ele){
            cnt--;
        }
    }
    return ele;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << "Majority Element: " << majorityElement(nums) << endl;
    return 0;
}

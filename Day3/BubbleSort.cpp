#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Bubble Sort Algorithm
    Logic : The algorithm repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.
    Time Complexity : O(n^2) in worst and average case, O(n) in best case
    Space Complexity : O(1)
*/

void bubbleSort(vector<int>& nums){
    int n = nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;

}
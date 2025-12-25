#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Selection Sort Algorithm
    Logic : The algorithm divides the input list into two parts: a sorted and an unsorted region. It repeatedly selects the smallest (or largest) element from the unsorted region and moves it to the end of the sorted region.
    Time Complexity : O(n^2) for all cases
    Space Complexity : O(1)
*/
void SelectionSort(vector<int>& nums){
    int n = nums.size();
    for(int i=0;i<n-1;i++){
        int idx = i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[idx]){
             idx = j;
            }
        }
        swap(nums[i],nums[idx]);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {64, 25, 12, 22, 11};
    SelectionSort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}
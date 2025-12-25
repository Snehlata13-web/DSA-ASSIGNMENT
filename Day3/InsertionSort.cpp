#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int>& nums){
    int n = nums.size();
    for(int i=1;i<n;i++){
        int key = nums[i];
        int j = i - 1;
        while(j >= 0 && nums[j] > key){
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {5, 2, 9, 1, 5, 6};
    InsertionSort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
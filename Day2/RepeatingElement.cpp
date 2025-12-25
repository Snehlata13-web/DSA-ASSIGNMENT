#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Find the repeating elements in an array
    Logic : Using HashMap to store the frequency of each element
    Time Complexity : O(n)
    Space Complexity : O(n)
*/
vector<int> findRepeatingElements(vector<int>& nums){
    unordered_map<int,int> mpp;
    vector<int> ans;
    for(int num : nums){
        mpp[num]++;
    }
    for(auto it : mpp){
        if(it.second > 1){
            ans.push_back(it.first);
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {1,2,3,4,5,3,6,7,8,2,9};
    vector<int> ans = findRepeatingElements(nums);
    for(int num : ans){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}


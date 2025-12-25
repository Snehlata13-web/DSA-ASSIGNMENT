#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Remove Duplicates from Sorted Array
    Logic : The algorithm uses a two-pointer technique where one pointer iterates through the array and the other pointer keeps track of the position to insert unique elements.
    Time Complexity : O(n)
    Space Complexity : O(1)
    Submission link :
*/
int removeDuplicates(vector<int>& nums) {
    int dupi =1;
    for(int i =0;i<nums.size()-1;i++){
        if(nums[i]<nums[i+1]){
            nums[dupi]=nums[i+1];
            dupi++;
        }
    }
    return dupi;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {1,1,2,2,3,4,4,5};
    int k = removeDuplicates(nums);
    cout<<"Length of array after removing duplicates: "<<k<<endl;
    cout<<"Array after removing duplicates: ";
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}
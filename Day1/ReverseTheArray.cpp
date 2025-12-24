#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Reverse the array after mth index.
    Logic : The algorithm uses a two-pointer approach to swap elements from the start i.e after m and end of the subarray.
    Time Complexity : O(n)
    Space Complexity : O(1)
*/
void reverseArray(vector<int>&arr,int m) {
    int n = arr.size();
    int left = m + 1;
    int right = n - 1;
    while (left<right) {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m; 
    vector<int> arr(n);
    for (int i=0; i<n;i++) {
        cin>>arr[i];
    }
    reverseArray(arr,m);
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
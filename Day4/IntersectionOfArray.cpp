#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Intersection of two arrays (brute force approach)
    Logic : The algorithm uses an unordered set to store the elements of the first array. It then iterates through the second array, checking if each element exists in the set. If it does, the element is added to the result vector and removed from the set to avoid duplicates.
    Time Complexity: O(nlogn+mlogn) due to set operations.
    Space Complexity: O(n) for storing elements of the first array in the set.
*/
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> st(nums1.begin(), nums1.end());
    vector<int> ans;
    for (int num : nums2) {
        if (st.find(num) != st.end()) {
            ans.push_back(num);
            st.erase(num);
        }
    }
    return ans;
}

/*
    Problem : Intersection of two arrays (optimal approach)
    Logic : The algorithm first sorts both input arrays. It then uses two pointers to traverse both arrays simultaneously, adding common elements to a temporary list. Finally, it removes duplicates by inserting the elements into an unordered set and then constructs the result vector from the set.
    Time Complexity : O(n log n + m log m) due to sorting both arrays.
    Space Complexity : O(min(n, m)) for storing the intersection elements.
    Submission Link :
*/

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> l1;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] == nums2[j]) {
            l1.push_back(nums1[i]);
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    unordered_set<int> st(l1.begin(), l1.end());
    vector<int> ans(st.begin(), st.end());
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> ans = intersection(nums1, nums2);
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
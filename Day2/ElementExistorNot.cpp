#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Check if an element exists in an array.
    Logic : The algorithm iterates through the array and checks if the target element is present. If found, it returns true; otherwise, it returns false.
    Time Complexity : O(n)
    Space Complexity : O(1)
*/

bool elementExists(const vector<int>& arr, int target) {
    for (int num : arr) {
        if (num == target) {
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, target;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> target;
    if (elementExists(arr, target)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Maximum Occurring Character in a String
    Logic : The algorithm uses an unordered map to count the frequency of each character in the string. It then iterates through the map to find the character with the maximum frequency.
    Time Complexity : O(n)
    Space Complexity : O(n)
*/

void maxOccurringChar(const string& str) {
    unordered_map<char, int> freq;
    for (char c : str) {
        freq[c]++;
    }
    
    char ans = '\0';
    int cnt = 0;

    for (auto it : freq) {
        if (it.second > cnt) {
            cnt = it.second;
            ans = it.first;
        }
    }
    if (ans != '\0') {
        cout << "Maximum Occurring Character: " << ans << " with count: " << cnt << endl;
    } else {
        cout << "String is empty." << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "Hello World!";
    maxOccurringChar(s);
    return 0;
}
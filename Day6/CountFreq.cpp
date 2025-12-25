#include <bits/stdc++.h>
using namespace std;
/*
    Problem : Count Frequency of Characters in a String
    Logic : The algorithm uses an unordered map to count the frequency of each character in the string by iterating through each character and updating its count in the map.
    Time Complexity : O(n)
    Space Complexity : O(n)
*/

void countFreq(string s){
    unordered_map<char, int> freq;
    for(char c : s){
        freq[c]++;
    }
    for(auto it : freq){
        cout << it.first << ": " << it.second << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "Hello World!";
    countFreq(s);
    return 0;
}
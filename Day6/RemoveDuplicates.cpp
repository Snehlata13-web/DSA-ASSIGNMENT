#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Remove Duplicates from a String
    Logic : The algorithm uses an unordered set to keep track of characters that have already been seen. It iterates through the input string, adding each character to the result string only if it has not been seen before.
    Time Complexity : O(n)
    Space Complexity : O(n)
*/
string removeDuplicates(string s){
    unordered_set<char> seen;
    string ans;
    for(char c : s){
        if(seen.find(c) == seen.end()){
            seen.insert(c);
            ans.push_back(c);
        }
    }
    return ans;  
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "programming";
    cout << "String after removing duplicates: " << removeDuplicates(s) << endl;
    return 0;
}
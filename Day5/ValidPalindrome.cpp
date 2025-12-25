#include <bits/stdc++.h>
using namespace std;

/* Problem : Valid Palindrome
    Logic : The algorithm first processes the input string to remove non-alphanumeric characters and convert it to lowercase. Then, it checks if the processed string is a palindrome by comparing characters from the start and end moving towards the center.
    Time Complexity : O(n)
    Space Complexity : O(n)
    Submission Link :
*/

bool isPalindrome(string s) {
    string newStr;
    for(int i =0;i<s.size();i++){
        if(isalnum(s[i])){
            newStr.push_back(tolower(s[i]));
        }
    }
    int left = 0;
    int right = newStr.size() - 1;

    while (left < right) {
        if (newStr[left] != newStr[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "A man, a plan, a canal: Panama";
    if(isPalindrome(s)) {
        cout << "The string is a valid palindrome." << endl;
    } else {
        cout << "The string is not a valid palindrome." << endl;
    }
    return 0;
}
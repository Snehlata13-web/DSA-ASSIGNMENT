#include <bits/stdc++.h>
using namespace std;

/* Problem : Remove Character
    Logic : The algorithm iterates through each character in the string, checking if it is an alphabetic character. If it is, it appends it to the result string.
    Time Complexity : O(n)
    Space Complexity : O(n)

*/
string removeCharacter(string str){
    string ans = "";
    for (char c : str) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            ans += c;
        }
    }
    return ans;
}

int main() {
    string s = "He!!llo W@orld123";
    cout << removeCharacter(s) << endl;
    return 0;
}
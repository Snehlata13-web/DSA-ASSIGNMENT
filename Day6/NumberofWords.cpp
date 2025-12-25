#include <bits/stdc++.h>
using namespace std;

/*
    Problem : Count Number of Words in a String
    Logic : The algorithm counts the number of words in a string by iterating through each character and incrementing the count whenever a space is encountered.
    Time Complexity : O(n)
    Space Complexity : O(1)
*/

int NumberofWords(string s){
    int ans =1;
    for(int i =0;i<s.size();i++){
        if(s[i]==' '){
            ans++;
        }
    }
    return ans;
}

int main() {
    string s;
    getline(cin,s);
    cout<<NumberofWords(s);
    return 0;
}
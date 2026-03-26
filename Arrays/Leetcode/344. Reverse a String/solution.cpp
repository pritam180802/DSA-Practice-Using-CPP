/*
Link : https://leetcode.com/problems/reverse-string/description/
Date: 26-03-2026
*/

class Solution {
public:
    void solve(vector<char>& s) {
        int start = 0, end = s.size() - 1;

        while (start < end) {
            swap(s[start++], s[end--]);
        }
    }
    void reverseString(vector<char>& s) { 
        solve(s);
    }
};
/*
 * @lc app=leetcode.cn id=409 lang=cpp
 *
 * [409] 最长回文串
 */
class Solution {
public:
    int longestPalindrome(string s) {
        // char map[58] = {0};
        // int c = 0;
        // for(int i = 0; i < s.length(); ++i) {
        //     map[s[i] - 'A']++;
        //     if(!(map[s[i] - 'A'] % 2)) c++;
        // }
        // return 2*c < s.length() ? 2*c+1 : 2*c;
        int odd = 0;
        unordered_map<char, int>m;
        for(auto c: s) odd += m[c]++ % 2 ? -1 : 1;
        return min(s.size(), s.size() - odd + 1);
    }
};

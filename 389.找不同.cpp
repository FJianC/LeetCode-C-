/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */
class Solution {
public:
    char findTheDifference(string s, string t) {
        s += t;
        int re = s[0];
        for(int i = 1; i < s.length(); ++i) re ^= s[i];
        return re;
    }
};

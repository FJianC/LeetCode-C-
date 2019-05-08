/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // unordered_map<char, int> r;
        // for(int i = 0; i < ransomNote.length(); ++i) {
        //     if(r.find(ransomNote[i]) != r.end()) r[ransomNote[i]]++;
        //     else r[ransomNote[i]] = 1;
        // }
        // for(int i = 0; i < magazine.length(); ++i) {
        //     if(r.find(magazine[i]) != r.end()) r[magazine[i]]--;
        // }
        // for(unordered_map<char, int>::iterator i = r.begin(); i != r.end(); ++i) {
        //     if(i->second > 0) return false;
        // }
        // return true;
        if(ransomNote.length() > magazine.length()) return false;
        int m[128] = { 0 };
        for(int i = 0; i < magazine.length(); ++i) m[magazine[i]]++;
        for(int i = 0; i < ransomNote.length(); ++i) if(--m[ransomNote[i]] < 0) return false;
        return true;
    }
};

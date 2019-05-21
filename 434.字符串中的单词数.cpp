/*
 * @lc app=leetcode.cn id=434 lang=cpp
 *
 * [434] 字符串中的单词数
 */
class Solution {
public:
    int countSegments(string s) {
        int left = 0, right = s.length() - 1;
        for(int i = 0; i < s.length(); ++i) {
            if (s[i] != ' ') break;
            ++left;
        }
        for(int i = s.length() - 1; i >= 0; ++i) {
            if (s[i] != ' ') break;
            --right;
        }
        if(left > right) return 0;
        int count = 0;
        for(int i = left; i <= right; ++i) {
            if (s[i] == ' ') {
                while(s[i] == ' ') ++i;
                if(i <= right) ++count;
                --i;
            }
        }
        return count + 1;
    }
};

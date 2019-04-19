/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 *
 * https://leetcode-cn.com/problems/isomorphic-strings/description/
 *
 * algorithms
 * Easy (43.45%)
 * Total Accepted:    9.3K
 * Total Submissions: 21.5K
 * Testcase Example:  '"egg"\n"add"'
 *
 * 给定两个字符串 s 和 t，判断它们是否是同构的。
 *
 * 如果 s 中的字符可以被替换得到 t ，那么这两个字符串是同构的。
 *
 * 所有出现的字符都必须用另一个字符替换，同时保留字符的顺序。两个字符不能映射到同一个字符上，但字符可以映射自己本身。
 *
 * 示例 1:
 *
 * 输入: s = "egg", t = "add"
 * 输出: true
 *
 *
 * 示例 2:
 *
 * 输入: s = "foo", t = "bar"
 * 输出: false
 *
 * 示例 3:
 *
 * 输入: s = "paper", t = "title"
 * 输出: true
 *
 * 说明:
 * 你可以假设 s 和 t 具有相同的长度。
 *
 */
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // if(s == t) return true;
        // if (s.length() != t.length()) return false;
        // if (s == "" || s.length() < 1) return false;
        // for (int i = 0; i < s.length(); i++) {
        //     int a = s[i];
        //     int b = t[i];
        //     for (int j = i + 1; j < s.length(); j++) {
        //         if (a == s[j] && b == t[j]) continue;
        //         if (a != s[j] && b != t[j]) continue;
        //         return false;
        //     }
        // }
        // return true;
        char map_s[128] = { 0 };
        char map_t[128] = { 0 };
        int len = s.size();
        for (int i = 0; i < len; ++i)
        {
            if (map_s[s[i]]!=map_t[t[i]]) return false;
            map_s[s[i]] = i+1;
            map_t[t[i]] = i+1;
        }
        return true; 
    }
};

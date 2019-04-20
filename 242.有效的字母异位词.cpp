/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 *
 * https://leetcode-cn.com/problems/valid-anagram/description/
 *
 * algorithms
 * Easy (51.83%)
 * Total Accepted:    26.8K
 * Total Submissions: 51.7K
 * Testcase Example:  '"anagram"\n"nagaram"'
 *
 * 给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的一个字母异位词。
 *
 * 示例 1:
 *
 * 输入: s = "anagram", t = "nagaram"
 * 输出: true
 *
 *
 * 示例 2:
 *
 * 输入: s = "rat", t = "car"
 * 输出: false
 *
 * 说明:
 * 你可以假设字符串只包含小写字母。
 *
 * 进阶:
 * 如果输入字符串包含 unicode 字符怎么办？你能否调整你的解法来应对这种情况？
 *
 */
class Solution {
public:
    bool isAnagram(string s, string t) {
        // if (t.length() != s.length()) return false;
        // unordered_map<char, int> m;
        // unordered_map<char, int> n;
        // for (int i = 0; i < s.length(); i++) {
        //     if (m.find(s[i]) != m.end()) m[s[i]]++;
        //     else m[s[i]] = 0;
        // }
        // for (int i = 0; i < t.length(); i++) {
        //     if (n.find(t[i]) != n.end()) n[t[i]]++;
        //     else n[t[i]] = 0;
        // }
        // if (m.size() != n.size()) return false;
        // unordered_map<char, int>::iterator it = m.begin();
        // for (; it != m.end(); ++it) {
        //     if (n.find(it->first) == n.end()) return false;
        //     if (n[it->first] != it->second) return false;
        // }
        // return true;
        // if (s.length() != t.length()) return false;
        // int n = s.length();
        // unordered_map<char, int> counts;
        // for (int i = 0; i < n; i++) {
        //     counts[s[i]]++;
        //     counts[t[i]]--;
        // }
        // for (auto count : counts)
        //     if (count.second) return false;
        // return true;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t; 
    }
};

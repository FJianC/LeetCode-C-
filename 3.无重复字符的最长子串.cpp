/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // 滑动窗口，
        int t = !s.empty();
        vector<int> m(128, 0);  // 记录重复字符的下一个位置
        for (int i = 0, j = 0; j < s.size(); j++) {
            i = max(i, m[s[j]]);
            m[s[j]] = j + 1;
            t = max(t, j - i + 1);
        }
        return t;
    }
};
// @lc code=end


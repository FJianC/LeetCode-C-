/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
        // 1. 动态规划
        /*
            二维数组 dp[s.size() + 1][p.size() + 1] 记录状态
            a) s == "" && p == "" 时，dp[0][0] = 1
            b) s != "" && p == "" 时，dp[i][0] = 0
            c) s == "" && p != "" 时，
                i) p[j - 1] == '*' 时，dp[0][j] = dp[0][j - 2]
            d) s != "" && p != "" 时，
                - '.' 可以匹配任何字符
                n) p[j - 1] == '*' 时，
                    1) p[j - 2] == s[i - 1] 时，dp[i][j] = dp[i][j - 2] || dp[i - 1][j]
                    2) p[j - 2] != s[i - 1] 时，dp[i][j] = dp[i][j - 2]
                m) p[j - 1] != '*' 时，
                    1) p[j - 1] == s[i - 1] 时，dp[j][j] = dp[i - 1][j - 1]
        */
        vector<vector<int> > dp(s.size() + 1, vector<int>(p.size() + 1, 0));
        dp[0][0] = 1;   // s p 都是空字符串
        // s 是空字符串，p 只需要处理 '*' 的情况
        for (int j = 1; j <= p.size(); ++j) {
            if (p[j - 1] == '*') {
                dp[0][j] = dp[0][j - 2];
            }
        }
        // 状态转移
        for (int i = 1; i <= s.size(); ++i) {
            for (int j = 1; j <= p.size(); ++j) {
                if (p[j - 1] == '*') {
                    if (j > 1) dp[i][j] = dp[i][j - 2];
                    if (p[j - 2] == '.' || p[j - 2] == s[i - 1]) {
                        dp[i][j] |= dp[i - 1][j];
                    } 
                } else if (p[j - 1] == '.' || s[i - 1] == p[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                }
            }
        }

        return dp[s.size()][p.size()];
    }
};
// @lc code=end


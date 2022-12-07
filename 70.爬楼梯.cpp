/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        // 斐波那契数列，vec[i] = vec[i - 1] + vec[i - 2];
        // 1.递归
        //return n < 3 ? max(0, n) : climbStairs(n - 1) + climbStairs(n - 2);
        // 2.动态规划
        vector<int> vec = {0, 1, 2};
        vec.resize(n + 1);
        for (int i = 3; i <= n; ++i) {
            vec[i] = vec[i - 1] + vec[i - 2];
        }
        return n < 0 ? 0 : vec[n];

    }
};
// @lc code=end


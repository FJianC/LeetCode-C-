/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2的幂
 *
 * https://leetcode-cn.com/problems/power-of-two/description/
 *
 * algorithms
 * Easy (44.88%)
 * Total Accepted:    16.8K
 * Total Submissions: 37.4K
 * Testcase Example:  '1'
 *
 * 给定一个整数，编写一个函数来判断它是否是 2 的幂次方。
 *
 * 示例 1:
 *
 * 输入: 1
 * 输出: true
 * 解释: 2^0 = 1
 *
 * 示例 2:
 *
 * 输入: 16
 * 输出: true
 * 解释: 2^4 = 16
 *
 * 示例 3:
 *
 * 输入: 218
 * 输出: false
 *
 */
class Solution {
public:
    bool isPowerOfTwo(int n) {
        // for (long i = 1; i <= n; i *= 2) {
        //     if (i == n) return true;
        // }
        // return false;
        return n > 0 && !(n & (n - 1));
    }
};

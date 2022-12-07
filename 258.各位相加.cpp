/*
 * @lc app=leetcode.cn id=258 lang=cpp
 *
 * [258] 各位相加
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        // 1.
        // while (num >= 10) {
        //     auto temp = num;
        //     num = 0;
        //     while (temp) {
        //         num += temp % 10;
        //         temp /= 10;
        //     }
        // }
        // return num;
        // 2.
        // while (num / 10) {
        //     num = num % 10 + num / 10;
        // }
        // return num;
        // 3. 数学归纳
        return (num - 1) % 9 + 1;
    }
};
// @lc code=end


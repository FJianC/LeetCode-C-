/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 *
 * https://leetcode-cn.com/problems/climbing-stairs/description/
 *
 * algorithms
 * Easy (44.93%)
 * Total Accepted:    39K
 * Total Submissions: 86.9K
 * Testcase Example:  '2'
 *
 * 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
 *
 * 每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
 *
 * 注意：给定 n 是一个正整数。
 *
 * 示例 1：
 *
 * 输入： 2
 * 输出： 2
 * 解释： 有两种方法可以爬到楼顶。
 * 1.  1 阶 + 1 阶
 * 2.  2 阶
 *
 * 示例 2：
 *
 * 输入： 3
 * 输出： 3
 * 解释： 有三种方法可以爬到楼顶。
 * 1.  1 阶 + 1 阶 + 1 阶
 * 2.  1 阶 + 2 阶
 * 3.  2 阶 + 1 阶
 *
 *
 */
class Solution {
public:
    int climbStairs(int n) {
        int a = 0, b = 1, re = 0;
        while(n--){
            re = a + b;
            a = b;
            b = re;
        }
        return re;

        // int StepOne = 1;
        // int StepTwo = 0;
        // int ret = 0;
        // for(int i=0;i<n;i++)
        // {
        //     ret = StepOne + StepTwo;
        //     StepTwo = StepOne;
        //     StepOne = ret;
        // }
        // return ret;
    }
};

/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 *
 * https://leetcode-cn.com/problems/maximum-subarray/description/
 *
 * algorithms
 * Easy (43.43%)
 * Total Accepted:    44.8K
 * Total Submissions: 102.7K
 * Testcase Example:  '[-2,1,-3,4,-1,2,1,-5,4]'
 *
 * 给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
 *
 * 示例:
 *
 * 输入: [-2,1,-3,4,-1,2,1,-5,4],
 * 输出: 6
 * 解释: 连续子数组 [4,-1,2,1] 的和最大，为 6。
 *
 *
 * 进阶:
 *
 * 如果你已经实现复杂度为 O(n) 的解法，尝试使用更为精妙的分治法求解。
 *
 */
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int max = nums[0];
        // for (int i = 0; i < nums.size(); i++) {
        //     int t = nums[i];
        //     max = max < t ? t : max;
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         t += nums[j];
        //         max = max < t ? t : max;
        //     }
        // }
        // return max;
        if (nums.size() == 0) {
            return 0;
        }
        int mx, lmx, rmx, sum;
        maxSubArray(nums, 0, nums.size() - 1, mx, lmx, rmx, sum);
        return mx;
    }
    void maxSubArray(vector<int>& nums, int l, int r, int& mx, int& lmx, int& rmx, int& sum) {
        if (l == r) {
            mx = lmx = rmx = sum = nums[l];
        }
        else {
            int m = (l + r) / 2;
            int mx1, lmx1, rmx1, sum1;
            int mx2, lmx2, rmx2, sum2;
            maxSubArray(nums, l, m, mx1, lmx1, rmx1, sum1);
            maxSubArray(nums, m + 1, r, mx2, lmx2, rmx2, sum2);
            mx = max(max(mx1, mx2), rmx1 + lmx2);
            lmx = max(lmx1, sum1 + lmx2);
            rmx = max(rmx2, sum2 + rmx1);
            sum = sum1 + sum2;
        }
    }
};

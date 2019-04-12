/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 *
 * https://leetcode-cn.com/problems/single-number/description/
 *
 * algorithms
 * Easy (60.10%)
 * Total Accepted:    58.2K
 * Total Submissions: 96.6K
 * Testcase Example:  '[2,2,1]'
 *
 * 给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
 *
 * 说明：
 *
 * 你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？
 *
 * 示例 1:
 *
 * 输入: [2,2,1]
 * 输出: 1
 *
 *
 * 示例 2:
 *
 * 输入: [4,1,2,1,2]
 * 输出: 4
 *
 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /* unordered_map.find--->remove */
        // for(int i = 0; i < nums.size(); i++) {
        //     int j = nums.size() - 1;
        //     for(; j >= 0; j--) {
        //         if(i == j) continue;
        //         if(nums[i] == nums[j]) break;
        //     }
        //     if(j < 0) return nums[i];
        // }
        // return 0;
        if(nums.empty()) return 0;
        int first = nums[0];
        for(int i = 1; i<nums.size();i++) {
            first = first ^ nums[i];
        }
        return first;
    }
};

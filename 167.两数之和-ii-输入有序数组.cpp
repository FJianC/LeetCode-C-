/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 *
 * https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted/description/
 *
 * algorithms
 * Easy (48.12%)
 * Total Accepted:    21.5K
 * Total Submissions: 44.7K
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * 给定一个已按照升序排列 的有序数组，找到两个数使得它们相加之和等于目标数。
 *
 * 函数应该返回这两个下标值 index1 和 index2，其中 index1 必须小于 index2。
 *
 * 说明:
 *
 *
 * 返回的下标值（index1 和 index2）不是从零开始的。
 * 你可以假设每个输入只对应唯一的答案，而且你不可以重复使用相同的元素。
 *
 *
 * 示例:
 *
 * 输入: numbers = [2, 7, 11, 15], target = 9
 * 输出: [1,2]
 * 解释: 2 与 7 之和等于目标数 9 。因此 index1 = 1, index2 = 2 。
 *
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // int len = numbers.size();
        // int contin = -2;
        // for (int i = 0; i < len; i++) {
        //     if(numbers[i] == contin) continue;
        //     contin = numbers[i];
        //     for (int j = i + 1; j < len; j++) {
        //     if (numbers[i] + numbers[j] == target) {
        //         return {i + 1, j + 1};
        //     } else if (numbers[i] + numbers[j] > target)
        //         len = j + 1;
        //     }
        // }
        // return {};
        int l = 0;
        int r = numbers.size() -1;
        while(l < r){
            if(numbers[l] + numbers[r] == target){
                return {l+1,r+1};
            }
            else if(numbers[l] + numbers[r] > target){
                r--;
            }
            else{
                l++;
            }
        }
		return {};
    }
};

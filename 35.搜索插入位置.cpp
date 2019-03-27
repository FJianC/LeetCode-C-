/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 *
 * https://leetcode-cn.com/problems/search-insert-position/description/
 *
 * algorithms
 * Easy (43.04%)
 * Total Accepted:    36K
 * Total Submissions: 83.7K
 * Testcase Example:  '[1,3,5,6]\n5'
 *
 * 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
 *
 * 你可以假设数组中无重复元素。
 *
 * 示例 1:
 *
 * 输入: [1,3,5,6], 5
 * 输出: 2
 *
 *
 * 示例 2:
 *
 * 输入: [1,3,5,6], 2
 * 输出: 1
 *
 *
 * 示例 3:
 *
 * 输入: [1,3,5,6], 7
 * 输出: 4
 *
 *
 * 示例 4:
 *
 * 输入: [1,3,5,6], 0
 * 输出: 0
 *
 *
 */
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int l = 0, r = nums.size() - 1, mid = 0;
        // while (l <= r) {
        //     mid = (l + r) / 2;
        //     if (nums[mid] < target) {
        //         l = mid + 1;
        //     } else if (nums[mid] > target) {
        //         r = mid - 1;
        //     } else {
        //         return mid;
        //     }
        // }
        // return nums[mid] > target ? mid : mid + 1;
        auto first = nums.begin(), last = nums.end();
        while (first < last) {
            auto mid = first + ((last - first) >> 1);
            if (*mid < target) {
                first = mid + 1;
            } else {
                last = mid;
            }
        }
        return first - nums.begin();
    }
};

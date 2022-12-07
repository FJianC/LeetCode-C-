/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <unordered_map>
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for (int i = 0; i < nums.size(); ++i)
        // {
        //     for (int j = i + 1; j < nums.size(); ++j)
        //     {
        //         if (nums[i] + nums[j] == target) return {i, j};
        //     }
        // }
        unordered_map<int, int> temp_map;
        for (int i = 0; i < nums.size(); ++i)
        {
            auto it = temp_map.find(nums[i]);
            if (it != temp_map.end()) return {it->second, i};
            temp_map[target - nums[i]] = i;
        }
        return {0, 0};
    }
};
// @lc code=end


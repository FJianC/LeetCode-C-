/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // 思想：降维处理，对任意索引i的nums[i]求[i+1,size)不重复的两数之和等于负的nums[i]
        sort(nums.begin(), nums.end()); // 排序
        vector<vector<int>> ret;
        for (int i = 0; i < nums.size() - 2; ++i) { // size >= 3
            if (nums[i] > 0) break; // 正数之和不可能等于0
            if (i > 0 && nums[i] == nums[i - 1]) continue;  // 去重
            for (int j = i + 1, k = nums.size() - 1; j < k;) {  // 左右边界
                const int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) { // target
                    ret.push_back({nums[i], nums[j], nums[k]});
                    while (j < k && nums[j] == nums[j + 1]) ++j;    // 左边界去重
                    while (j < k && nums[k] == nums[k - 1]) --k;    // 右边界去重
                }
                if (sum <= 0) ++j;  // nums[j]太小
                if (sum >= 0) --k;  // nums[k]太大
            }    
        }
        return ret;
    }
};
// @lc code=end


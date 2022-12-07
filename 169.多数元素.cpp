/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // 1.哈希表
        // map<int, int> count;
        // const int max = nums.size() / 2;
        // for (const auto& a : nums) {
        //     if (++count[a] > max) return a;
        // }
        // return 0;
        // 2. 排序
        // sort(nums.begin(), nums.end());
        // return nums.empty() ? 0 : nums[nums.size() / 2];
        // 3.随机
        // 4.分治
        // 5.Boyer-Moore 投票算法，
        int candidate = 0;  // 候选人
        int count = 0;      // 投票数
        for (const auto& a : nums) {
            if (count == 0) {   // 没人投票时，选候选人
                candidate = a;
            }
            count += a == candidate ? 1 : -1;   // 投票
        }
        return candidate;
    }
};
// @lc code=end


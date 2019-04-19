/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 *
 * https://leetcode-cn.com/problems/contains-duplicate-ii/description/
 *
 * algorithms
 * Easy (33.88%)
 * Total Accepted:    11.8K
 * Total Submissions: 35K
 * Testcase Example:  '[1,2,3,1]\n3'
 *
 * 给定一个整数数组和一个整数 k，判断数组中是否存在两个不同的索引 i 和 j，使得 nums [i] = nums [j]，并且 i 和 j
 * 的差的绝对值最大为 k。
 *
 * 示例 1:
 *
 * 输入: nums = [1,2,3,1], k = 3
 * 输出: true
 *
 * 示例 2:
 *
 * 输入: nums = [1,0,1,1], k = 1
 * 输出: true
 *
 * 示例 3:
 *
 * 输入: nums = [1,2,3,1,2,3], k = 2
 * 输出: false
 *
 */
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // unordered_map<int, vector<int>> m;
        // for (int i = 0; i < nums.size(); i++) {
        //     vector<int> v;
        //     if (m.find(nums[i]) != m.end()) v = m[nums[i]];
        //     v.push_back(i);
        //     m[nums[i]] = v;
        // }
        // unordered_map<int, vector<int>>::iterator it = m.begin();
        // while (it != m.end()) {
        //     vector<int> v = it->second;
        //     if (v.size() > 1) {
        //         for (int i = 0; i < v.size(); i++) {
        //             for (int j = i + 1; j < v.size(); j++) {
        //                 int t = v[i] - v[j];
        //                 if ((t >= 0 && t <= k) || (t < 0 && t >= -k)) return true;
        //             }
        //         }
        //     }
        //     ++it;
        // }
        // return false;
        // unordered_map<int, int> m;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (m.find(nums[i]) != m.end()) {
        //         if (i - m[nums[i]] <= k) return true;
        //     }
        //     m[nums[i]] = i;
        // }
        // return false;
        unordered_set<int> s;

        if (k <= 0) return false;
        if (k >= nums.size()) k = nums.size() - 1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i > k) s.erase(nums[i - k - 1]);
            if (s.find(nums[i]) != s.end()) return true;
            s.insert(nums[i]);
        }

        return false;
    }
};

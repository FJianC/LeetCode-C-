/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 求众数
 *
 * https://leetcode-cn.com/problems/majority-element/description/
 *
 * algorithms
 * Easy (58.46%)
 * Total Accepted:    35.5K
 * Total Submissions: 60.7K
 * Testcase Example:  '[3,2,3]'
 *
 * 给定一个大小为 n 的数组，找到其中的众数。众数是指在数组中出现次数大于 ⌊ n/2 ⌋ 的元素。
 *
 * 你可以假设数组是非空的，并且给定的数组总是存在众数。
 *
 * 示例 1:
 *
 * 输入: [3,2,3]
 * 输出: 3
 *
 * 示例 2:
 *
 * 输入: [2,2,1,1,1,2,2]
 * 输出: 2
 *
 *
 */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int, int> m;
        // for(int i = 0; i < nums.size(); i++) {
        //     if(m.find(nums[i]) == m.end()) m[nums[i]] = 1;
        //     else m[nums[i]]++;
        // }
        // for(unordered_map<int, int>::iterator i = m.begin(); i != m.end(); ++i) {
        //     if(i->second > nums.size() / 2) return i->first;
        // }
        // return 0;
        unordered_map<int, int> counter;
        for (int num : nums) {
            if (++counter[num] > nums.size() / 2) {
                return num;
            }
        }
        return 0;
    }
};

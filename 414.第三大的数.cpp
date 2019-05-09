/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size() < 3) {
            int m = nums[0];
            for(int i = 1; i < nums.size(); ++i) if(nums[i] > m) m = nums[i];
            return m;
        }
        int max[2];
        int n = nums[0];
        for(int i = 1; i < nums.size(); ++i) if(nums[i] < n) n = nums[i];
        max[0] = max[1] = n;
        for(int i = 0; i < nums.size(); ++i) if(nums[i] > max[0]) max[0] = nums[i];
        for(int i = 0; i < nums.size(); ++i) if(nums[i] > max[1] && nums[i] != max[0]) max[1] = nums[i];
        for(int i = 0; i < nums.size(); ++i) if(nums[i] > n && nums[i] != max[0] && nums[i] != max[1]) n = nums[i];
        return n >= max[1] || max[1] >= max[0] ? max[0] : n;
        // sort(begin(nums), end(nums));
		// reverse(begin(nums), end(nums));
		// size_t i = 0, n = nums.size();
		// while (i + 1 < n && nums[i + 1] == nums[i]) i++;
		// if (i + 1 == n) return nums[0];
		// i++;
		// while (i + 1 < n && nums[i + 1] == nums[i]) i++;
		// if (i + 1 == n) return nums[0];
		// return nums[++i];
    }
};

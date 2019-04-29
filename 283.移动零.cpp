/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int count = 0;
        // vector<int>::iterator it = nums.begin();
        // while(it != nums.end()) {
        //     if (*it == 0) {
        //         nums.erase(it);
        //         count++;
        //     } else {
        //         ++it;
        //     }
        // }
        // for(int i = 0; i < count; i++) {
        //     nums.push_back(0);
        // }
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (;j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};

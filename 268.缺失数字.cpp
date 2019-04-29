/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 缺失数字
 */
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int* p = new int[nums.size() + 1]{0};
        // for(int i = 0; i < nums.size(); i++) {
        //     p[nums[i]] = 1;
        // }
        // for(int i = 0; i <= nums.size(); i++) {
        //     if(!p[i]) return i;
        // }
        // return 0;
        // int res = nums.size();
        // for(int i=0; i<nums.size(); i++){
        //     res ^= i;
        //     res ^= nums[i];
        // }
        // return res;
        int len = nums.size();
        int sum = (0+len)*(len+1)/2;
        for(int i=0; i<len; i++)
            sum-=nums[i];
        return sum;
        //Binary Search
        //sort()
        //...
    }
};

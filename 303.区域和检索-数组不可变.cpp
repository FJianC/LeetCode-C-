/*
 * @lc app=leetcode.cn id=303 lang=cpp
 *
 * [303] 区域和检索 - 数组不可变
 */
class NumArray {
    vector<int> nums_;
    vector<int> accu;
public:
    NumArray(vector<int>& nums) {
        // nums_ = nums;
        accu.push_back(0);
        for (int num : nums)
            accu.push_back(accu.back() + num);
    }

    int sumRange(int i, int j) {
        // int re = 0;
        // if(i <= j && i < nums_.size()) {
        //     if(j >= nums_.size()) j = nums_.size() - 1;
        //     for(;i <= j; i++) {
        //         re += nums_[i];
        //     }
        // }
        // return re;
        return accu[j + 1] - accu[i];
    }

};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */

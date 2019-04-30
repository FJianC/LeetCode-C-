/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> v;
        // for(int i = 0; i < nums1.size(); i++) {
        //     bool flag = false;
        //     for(int num : v) {
        //         if(num == nums1[i]) {
        //             flag = true;
        //             break;
        //         }
        //     }
        //     if(flag) continue;
        //     for(int j = 0; j < nums2.size(); j++) {
        //         if(nums1[i] == nums2[j]) {
        //             v.push_back(nums1[i]);
        //             break;
        //         }
        //     }
        // }
        // return v;
        unordered_set<int> m(nums1.begin(), nums1.end());
        vector<int> res;
        for (auto a : nums2)
            if (m.count(a)) {
                res.push_back(a);
                m.erase(a);
            }
        return res;
    }
};

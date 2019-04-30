/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // unordered_map<int, int> m;
        // for(int i = 0; i < nums1.size(); i++) {
        //     if(m.find(nums1[i]) != m.end()) m[nums1[i]]++;
        //     else m[nums1[i]] = 1;
        // }
        // unordered_map<int, int> n;
        // for(int i = 0; i < nums2.size(); i++) {
        //     if(n.find(nums2[i]) != n.end()) n[nums2[i]]++;
        //     else n[nums2[i]] = 1;
        // }
        // vector<int> v;
        // unordered_map<int, int>::iterator it = m.begin();
        // while(it != m.end()) {
        //     if(n.find(it->first) != n.end()) {
        //         int count = n[it->first] > it->second ? it->second : n[it->first];
        //         for(int i = 0; i < count; i++) {
        //             v.push_back(it->first);
        //         }
        //     }
        //     ++it;
        // }
        // return v;
        unordered_map<int, int> dict;
        vector<int> res;
        for(int i = 0; i < (int)nums1.size(); i++) dict[nums1[i]]++;
        for(int i = 0; i < (int)nums2.size(); i++)
            if(--dict[nums2[i]] >= 0) res.push_back(nums2[i]);
        return res;
    }
};

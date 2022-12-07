/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> temp_nums;
        // temp_nums.reserve(nums1.size() + nums2.size());
        // for (int i = 0, j = 0; i < nums1.size() || j < nums2.size();) {
        //     if (i < nums1.size() && (j >= nums2.size() || nums1[i] <= nums2[j])) {
        //         temp_nums.push_back(nums1[i++]);
        //     } else if (j < nums2.size() && (i >= nums1.size() || nums1[i] > nums2[j])) {
        //         temp_nums.push_back(nums2[j++]);
        //     }
        // }
        // if (temp_nums.empty()) return 0;
        // const int count = temp_nums.size() / 2;
        // return temp_nums.size() % 2 == 0 ? (double)(temp_nums[count] + temp_nums[count - 1]) / 2 : temp_nums[count];
    
        const int mid = (nums1.size() + nums2.size()) / 2;
        const bool is_odd = (nums1.size() + nums2.size()) % 2 != 0;

        double ret = 0;
        for (int i = 0, j = 0; i + j <= mid;) {
            const bool vaild_i = i < nums1.size() && (j >= nums2.size() || nums1[i] <= nums2[j]);
            const bool vaild_j = j < nums2.size() && (i >= nums1.size() || nums1[i] > nums2[j]);
            const bool vaild_mid = i + j == mid || (!is_odd && i + j + 1 == mid);

            if (vaild_i) {
                if (vaild_mid) ret += nums1[i];
                ++i;
            } else if (vaild_j) {
                if (vaild_mid) ret += nums2[j];
                ++j;
            } else {
                break;
            }
        }
        return is_odd ? ret : ret / 2;
    }
};
// @lc code=end


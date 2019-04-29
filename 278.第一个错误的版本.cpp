/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // if(n == 1 && isBadVersion(n)) return n;
        // int l = 1;
        // long r = n;
        // while (l < r) {
        //     long mid = (r + l) / 2;
        //     if(isBadVersion(mid)) {
        //         if(!isBadVersion(mid-1)) return mid;
        //         r = mid;
        //     } else {
        //         if(isBadVersion(mid+1)) return mid+1;
        //         l = mid;
        //     }
        // }
        // return 0;
        long start=1,end=n;
        int res=-1;
        while(start<=end){
            long mid = (start+end)/2;
            if(isBadVersion(mid)){
                res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res;
    }
};

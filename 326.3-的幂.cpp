/*
 * @lc app=leetcode.cn id=326 lang=cpp
 *
 * [326] 3的幂
 */
class Solution {
public:
    bool isPowerOfThree(int n) {
        // while(n > 2) {
        //     if(n % 3 != 0) return false;
        //     n /= 3;
        // }
        // return n == 1;
        return fmod(log10(n)/log10(3), 1)==0;
    }
};

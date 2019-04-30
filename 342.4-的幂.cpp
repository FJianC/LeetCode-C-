/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */
class Solution {
public:
    bool isPowerOfFour(int num) {
        // while(num > 3) {
        //     if(num % 4 != 0) return false;
        //     num /= 4;
        // }
        // return num == 1;
        return fmod(log10(num)/log10(4), 1)==0;
    }
};

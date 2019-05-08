/*
 * @lc app=leetcode.cn id=374 lang=cpp
 *
 * [374] 猜数字大小
 */
// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        long l = 1;
        long r = n;
        while(l < r) {
            long m = (l + r) / 2;
            int f = guess(m);
            if(!f) return m;
            if(f == 1) l = m + 1;
            if(f == -1) r = m - 1;
        }
        return r;
    }
};

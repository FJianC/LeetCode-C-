/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */
class Solution {
public:
    bool isPerfectSquare(int num) {
        // long i = num / 2;
        // while(i * i > num) i /= 2;
        // while(i * i < num) i++;
        // if(i * i == num) return true;
        // return false;
        long r = num;
        while (r*r > num)
            r = (r + num/r) / 2;
        return r*r == num;
    }
};

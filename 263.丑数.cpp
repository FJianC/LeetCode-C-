/*
 * @lc app=leetcode.cn id=263 lang=cpp
 *
 * [263] 丑数
 */
class Solution {
public:
    bool isUgly(int num) {
        // while (num > 1) {
        //     if (num % 2 == 0) num /= 2;
        //     else if (num % 3 == 0) num /= 3;
        //     else if (num % 5 == 0) num /= 5;
        //     else return false;
        // }
        // return num == 1;
        for (int i=2; i<6 && num; i++)
            while (num % i == 0)
                num /= i;
        return num == 1;
    }
};

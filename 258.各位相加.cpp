/*
 * @lc app=leetcode.cn id=258 lang=cpp
 *
 * [258] 各位相加
 */
class Solution {
public:
    int addDigits(int num) {
        // while (num >= 10) {
        //     int temp = num;
        //     for (num = 0; temp > 0; temp /= 10) {
        //         num += temp % 10;
        //     }
        // }
        // return num;
        if(num%9 == 0 && num!=0) return 9;
        return (num%9);
    }
};

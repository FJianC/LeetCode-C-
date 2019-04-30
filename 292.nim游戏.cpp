/*
 * @lc app=leetcode.cn id=292 lang=cpp
 *
 * [292] Nim游戏
 */
class Solution {
public:
    bool canWinNim(int n) {
        // if(n > 3) {
        //     int i;
        //     for(i = 1; i < 4; i++) {
        //         if((n-i)%4 == 0) break;
        //     }
        //     if(i > 3) return false;
        // }
        // return true;
        return n%4;
    }
};

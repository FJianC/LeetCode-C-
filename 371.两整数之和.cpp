/*
 * @lc app=leetcode.cn id=371 lang=cpp
 *
 * [371] 两整数之和
 */
class Solution {
public:
    int getSum(int a, int b) {
        // int re = a ^ b;
        // int add = (unsigned int)(a & b) << 1;
        // while(add) {
        //     int t = re ^ add;
        //     add = (unsigned int)(re & add) << 1;
        //     re = t;
        // }
        // return re;
        // int sum = a;
        // while (b != 0)
        // {
        //     sum = a ^ b;//calculate sum of a and b without thinking the carry
        //     b = (unsigned int)(a & b) << 1;//calculate the carry
        //     a = sum;//add sum(without carry) and carry
        // }
        // return sum;
        // int p,q,c = 0,ans = 0;
        // for(int i = 0;i < 32;i++) {
        //     p = a >> i & 1;
        //     q = b >> i & 1;
        //     ans += (p ^ q ^ c) << i;
        //     c = p & q | p & c | q & c;
        // }
        // return ans;
        return b ? getSum(a^b, (unsigned int)(a&b)<<1) : a;
    }
};

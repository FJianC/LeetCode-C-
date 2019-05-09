/*
 * @lc app=leetcode.cn id=415 lang=cpp
 *
 * [415] 字符串相加
 */
class Solution {
public:
    string addStrings(string num1, string num2) {
        // string re;
        // if(num1.length() < num2.length()) {
        //     string s = num1;
        //     num1 = num2;
        //     num2 = s;
        // }
        // int len = num1.length() - num2.length();
        // for(int i = 0; i < len; ++i) num2 = "0" + num2;
        // int add = 0;
        // for(int i = num1.length() - 1; i >= 0; --i) {
        //     int sum = num1[i] + num2[i] - 2 * '0';
        //     if(add) sum++;
        //     add = sum > 9 ? 1 : 0;
        //     if(add) sum -= 10;
        //     re = to_string(sum) + re;
        // }
        // return add ? "1" + re : re;
        string re;
        int add = 0;
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        while(i >= 0 || j >= 0 || add != 0) {
            if(i >= 0) add += num1[i--] - '0';
            if(j >= 0) add += num2[j--] - '0';
            re = to_string(add % 10) + re;
            add /= 10;
        }
        return re;
    }
};

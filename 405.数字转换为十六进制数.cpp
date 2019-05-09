/*
 * @lc app=leetcode.cn id=405 lang=cpp
 *
 * [405] 数字转换为十六进制数
 */
class Solution {
public:
    string toHex(int num) {
        // !fail
        // if(num < 0) {
        //     num = ~num;
        //     num++;
        // }
        // char six[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
        // if(num < 16) return to_string(six[num]);
        // string s = "";
        // while (num % 16 != num) {
        //     s = six[num % 16] + s;
        //     num /= 16;
        // }
        // int i = 0;
        // for(; i < s.length(); ++i) if(s[i] != '0') break;
        // return s.substr(i, s.length());
        /**
         * suc
        */
        if (num == 0) return "0";
        string hex = "0123456789abcdef", ans = "";
        while(num && ans.size() < 8){
            ans = hex[num & 0xf] + ans;
            num >>=  4;
        }
        return ans;
    }
};

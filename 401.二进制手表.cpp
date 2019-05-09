/*
 * @lc app=leetcode.cn id=401 lang=cpp
 *
 * [401] 二进制手表
 */
class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> re;
        for(int i = 0; i < 12; ++i) {
            for(int j = 0; j < 60; ++j) {
                if(BitCount(i) + BitCount(j) == num) {
                    string s = to_string(i) + ":";
                    if(j < 10) s += "0";
                    s += to_string(j);
                    re.push_back(s);
                }
            }
        }
        return re;
    }

    int BitCount(int n) {
        unsigned int c = 0;
        while(n) {
            n &= (n - 1);
            ++c;
        }
        return c;
    }
};

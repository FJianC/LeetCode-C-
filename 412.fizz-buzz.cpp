/*
 * @lc app=leetcode.cn id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> re;
        for(int i = 1; i <= n; ++i) {
            string s = to_string(i);
            if(!(i % 3)) s = "Fizz";
            if(!(i % 5)) s = i%3 ? "Buzz" : s+"Buzz";
            re.push_back(s);
        }
        return re;
    }
};

/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */
class Solution {
public:
    string reverseVowels(string s) {
        // int l = 0;
        // int r = s.length() - 1;
        // char a[] = {'a','e','i','o','u','A','E','I','O','U'};
        // while(l < r) {
        //     while(l < r) {
        //         int i = 0;
        //         for(; i < 10; i++) {
        //             if(s[l] == a[i]) break;
        //         }
        //         if(i < 10) break;
        //         l++;
        //     }
        //     while(l < r) {
        //         int i = 0;
        //         for(; i < 10; i++) {
        //             if(s[r] == a[i]) break;
        //         }
        //         if(i < 10) break;
        //         r--;
        //     }
        //     if(l < r && s[l] != s[r]) swap(s[l], s[r]);
        //     l++;
        //     r--;
        // }
        // return s;
        int i = 0, j = s.size() - 1;
        while (i < j) {
            i = s.find_first_of("aeiouAEIOU", i);
            j = s.find_last_of("aeiouAEIOU", j);
            if (i < j) {
                swap(s[i++], s[j--]);
            }
        }
        return s;
    }
};

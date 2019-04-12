/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 *
 * https://leetcode-cn.com/problems/valid-palindrome/description/
 *
 * algorithms
 * Easy (38.75%)
 * Total Accepted:    31.1K
 * Total Submissions: 79.9K
 * Testcase Example:  '"A man, a plan, a canal: Panama"'
 *
 * 给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。
 *
 * 说明：本题中，我们将空字符串定义为有效的回文串。
 *
 * 示例 1:
 *
 * 输入: "A man, a plan, a canal: Panama"
 * 输出: true
 *
 *
 * 示例 2:
 *
 * 输入: "race a car"
 * 输出: false
 *
 *
 */
class Solution {
public:
    bool isPalindrome(string s) {
        // vector<int> temp;
        // for (int i = 0; i < s.length(); i++) {
        //     if (s[i] >= 65 && s[i] <= 90) temp.push_back(s[i] + 32);
        //     if (s[i] >= 97 && s[i] <= 122) temp.push_back(s[i]);
        //     if (s[i] >= 48 && s[i] <= 57) temp.push_back(s[i]);
        // }
        // for (int i = 0, j = temp.size() - 1; i < j; i++, j--) {
        //     if (temp[i] != temp[j]) return false;
        // }
        // return true;
        int n = s.size(), l = 0, r = n - 1;
        while (l < r) {
            while (l < r && !isalnum(s[l])) {
                l++;
            }
            while (l < r && !isalnum(s[r])) {
                r--;
            }
            if (tolower(s[l++]) != tolower(s[r--])) {
                return false;
            }
        }
        return true;
    }
};

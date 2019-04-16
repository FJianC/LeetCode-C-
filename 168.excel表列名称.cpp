/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 *
 * https://leetcode-cn.com/problems/excel-sheet-column-title/description/
 *
 * algorithms
 * Easy (31.40%)
 * Total Accepted:    6.9K
 * Total Submissions: 21.8K
 * Testcase Example:  '1'
 *
 * 给定一个正整数，返回它在 Excel 表中相对应的列名称。
 *
 * 例如，
 *
 * ⁠   1 -> A
 * ⁠   2 -> B
 * ⁠   3 -> C
 * ⁠   ...
 * ⁠   26 -> Z
 * ⁠   27 -> AA
 * ⁠   28 -> AB
 * ⁠   ...
 *
 *
 * 示例 1:
 *
 * 输入: 1
 * 输出: "A"
 *
 *
 * 示例 2:
 *
 * 输入: 28
 * 输出: "AB"
 *
 *
 * 示例 3:
 *
 * 输入: 701
 * 输出: "ZY"
 *
 *
 */
class Solution {
public:
    string convertToTitle(int n) {
        // string s = "";
        // if(n <= 26) s = (char)(64 + n);
        // while(n > 26) {
        //     char c = (char)(64 + n % 26);
        //     if(n % 26 == 0) {
        //         c = 90;
        //         n -= 1;
        //     }
        //     s = c + s;
        //     n /= 26;
        //     if(n <= 26) s = (char)(64 + n) + s;
        // }
        // return s;
        string res="";
        while(n>0){
            res=char('A'+(n-1)%26)+res;
            n=(n-1)/26;
        }
        return res;
    }
};

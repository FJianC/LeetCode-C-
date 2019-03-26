/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 *
 * https://leetcode-cn.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (32.42%)
 * Total Accepted:    62.8K
 * Total Submissions: 193.3K
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * 编写一个函数来查找字符串数组中的最长公共前缀。
 *
 * 如果不存在公共前缀，返回空字符串 ""。
 *
 * 示例 1:
 *
 * 输入: ["flower","flow","flight"]
 * 输出: "fl"
 *
 *
 * 示例 2:
 *
 * 输入: ["dog","racecar","car"]
 * 输出: ""
 * 解释: 输入不存在公共前缀。
 *
 *
 * 说明:
 *
 * 所有输入只包含小写字母 a-z 。
 *
 */
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // if (strs.empty()) return "";
        // bool flag = false;
        // int i = 0;
        // for(; i < strs.at(0).length(); i++)
        // {
        //     char c = strs.at(0)[i];
        //     for(int j = 1; j < strs.size(); j++)
        //     {
        //         if (c != strs.at(j)[i]) {
        //             flag = true;
        //             break;
        //         }
        //     }
        //     if (flag) break;
        // }
        // if (i > 0) {
        //     return strs.at(0).substr(0, i);
        // } else {
        //     return "";
        // }
        if(strs.empty()){
            return "";
        }
        string ans = strs[0];
        for(int i = 1;i < strs.size(); ++i){
            int p = ans.length();
            int q = strs[i].length();
            int common = 0;
            for(int m = 0, n = 0; m < p && n < q; ++m, ++n){
                if(ans[m] == strs[i][n]){
                    ++common;
                }else{
                    break;
                }
            }
            ans = ans.substr(0, common);
            if(ans == ""){
                break;
            }
        }
        return ans;
    }
};

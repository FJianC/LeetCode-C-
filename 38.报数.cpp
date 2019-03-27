/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 报数
 *
 * https://leetcode-cn.com/problems/count-and-say/description/
 *
 * algorithms
 * Easy (48.58%)
 * Total Accepted:    24.7K
 * Total Submissions: 50.8K
 * Testcase Example:  '1'
 *
 * 报数序列是一个整数序列，按照其中的整数的顺序进行报数，得到下一个数。其前五项如下：
 *
 * 1.     1
 * 2.     11
 * 3.     21
 * 4.     1211
 * 5.     111221
 *
 *
 * 1 被读作  "one 1"  ("一个一") , 即 11。
 * 11 被读作 "two 1s" ("两个一"）, 即 21。
 * 21 被读作 "one 2",  "one 1" （"一个二" ,  "一个一") , 即 1211。
 *
 * 给定一个正整数 n（1 ≤ n ≤ 30），输出报数序列的第 n 项。
 *
 * 注意：整数顺序将表示为一个字符串。
 *
 *
 *
 * 示例 1:
 *
 * 输入: 1
 * 输出: "1"
 *
 *
 * 示例 2:
 *
 * 输入: 4
 * 输出: "1211"
 *
 *
 */
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        // if (n < 2) return "1";
        // string str = countAndSay(n - 1);
        // int count = 1;
        // int len = str.length() - 1;
        // string temp = "";
        // for(int i = 0; i <= len;)
        // {
        //     int count = 1;
        //     for (int j = i + 1; j <= len; j++, count++) {
        //         if (str[i] != str[j]) break;
        //     }
        //     temp += std::to_string(count);
        //     temp += str[i];
        //     i += count;
        // }
        // return temp;
        string curr_str;
	    curr_str += '1';
        for (int i = 0; i < n - 1; i++)
        {
            string buffer;
            int index = 0;
            for (int index = 0; index < curr_str.size(); ++index)
            {
                int cnt = 1;
                while (index + 1 < curr_str.size() and curr_str[index + 1] == curr_str[index])
                {
                    index++;
                    cnt++;
                }
                buffer.push_back(cnt + '0');
                buffer.push_back(curr_str[index]);
            }
            curr_str = buffer;
        }
        return curr_str;
    }
};

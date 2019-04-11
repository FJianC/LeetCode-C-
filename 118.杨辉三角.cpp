/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 *
 * https://leetcode-cn.com/problems/pascals-triangle/description/
 *
 * algorithms
 * Easy (60.94%)
 * Total Accepted:    20.2K
 * Total Submissions: 33.2K
 * Testcase Example:  '5'
 *
 * 给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。
 *
 *
 *
 * 在杨辉三角中，每个数是它左上方和右上方的数的和。
 *
 * 示例:
 *
 * 输入: 5
 * 输出:
 * [
 * ⁠    [1],
 * ⁠   [1,1],
 * ⁠  [1,2,1],
 * ⁠ [1,3,3,1],
 * ⁠[1,4,6,4,1]
 * ]
 *
 */
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        // vector<int> up;
        // up.push_back(1);
        // while(numRows--) {
        //     vector<int> down;
        //     for(int i=0; i < up.size(); i++) {
        //         i == 0 ? down.push_back(1) : down.push_back(up[i-1] + up[i]);
        //     }
        //     result.push_back(down);
        //     up = down;
        //     up.push_back(0);
        // }
        // return result;
        vector<int> row;
        for(int i = 0; i < numRows; i++){
            row.push_back(1);
            for(int j = i - 1; j > 0; j--){
                row[j] = row[j - 1] + row[j];
            }
            result.push_back(row);
        }
        return result;
    }
};

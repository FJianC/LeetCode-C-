/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
 *
 * https://leetcode-cn.com/problems/binary-tree-level-order-traversal-ii/description/
 *
 * algorithms
 * Easy (59.53%)
 * Total Accepted:    12.8K
 * Total Submissions: 21.5K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * 给定一个二叉树，返回其节点值自底向上的层次遍历。 （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）
 *
 * 例如：
 * 给定二叉树 [3,9,20,null,null,15,7],
 *
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 *
 *
 * 返回其自底向上的层次遍历为：
 *
 * [
 * ⁠ [15,7],
 * ⁠ [9,20],
 * ⁠ [3]
 * ]
 *
 *
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <queue>
using namespace std;
class Solution {
public:
    // vector<vector<int>> levelOrderBottom(TreeNode* root) {
    //     queue<TreeNode*> q1;
    //     queue<TreeNode*> q2;
    //     vector<vector<int>> re;
    //     if(!root) return re;
    //     vector<int> temp;
    //     temp.push_back(root->val);
    //     re.insert(re.begin(), temp);
    //     q1.push(root);
    //     while(!q1.empty()){
    //         TreeNode* t = q1.front()->left;
    //         if(t) q2.push(t);
    //         t = q1.front()->right;
    //         if(t) q2.push(t);
    //         q1.pop();
    //         if(q1.empty()) {
    //             temp.clear();
    //             q1 = q2;
    //             while(!q2.empty()) {
    //                 temp.push_back(q2.front()->val);
    //                 q2.pop();
    //             }
    //             if (temp.empty()) break;
    //             re.insert(re.begin(), temp);
    //         }
    //     }
    //     return re;
    // }

    void levelOrder(vector<vector<int>> &ans, TreeNode *node, int level) {
        if (!node) return;
        if (level >= ans.size())
            ans.push_back({});
        ans[level].push_back(node->val);
        levelOrder(ans,node->left,level+1);
        levelOrder(ans,node->right,level+1);
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrder(ans,root,0);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

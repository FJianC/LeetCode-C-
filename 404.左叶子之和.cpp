/*
 * @lc app=leetcode.cn id=404 lang=cpp
 *
 * [404] 左叶子之和
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
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return searchLeftLeaves(root, 0);
    }
    int searchLeftLeaves(TreeNode* root, int sum) {
        if(!root) return sum;
        if(root->left) {
            if(!root->left->left && !root->left->right) {
                sum += root->left->val;
            }
        }
        sum = searchLeftLeaves(root->left, sum);
        sum = searchLeftLeaves(root->right, sum);
        return sum;
    }
};

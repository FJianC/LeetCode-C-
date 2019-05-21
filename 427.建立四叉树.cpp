/*
 * @lc app=leetcode.cn id=427 lang=cpp
 *
 * [427] 建立四叉树
 */
/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {}

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/
class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
        return BST(grid, 0, 0, grid.size());
    }

    Node *BST(vector<vector<int>>& grid, int row, int column, int len) {
        Node *root = new Node();
        root->isLeaf = true;
        int flag = grid[row][column];
        for(int i = row; i < row + len; ++i) {
            for(int j = column; j < column + len; ++j) {
                if(grid[i][j] != flag) {
                    root->isLeaf = false;
                    break;
                }
            }
        }
        if(root->isLeaf) return new Node(grid[row][column], true, NULL, NULL, NULL, NULL);
        len /= 2;
        Node *TopLeft = BST(grid, row, column, len);
        Node *TopRight = BST(grid, row, column + len, len);
        Node *BottomLeft = BST(grid, row + len, column, len);
        Node *BottomRight = BST(grid, row + len, column + len, len);
        root->topLeft = TopLeft;
        root->topRight = TopRight;
        root->bottomLeft = BottomLeft;
        root->bottomRight = BottomRight;
        root->val = TopLeft->val && TopRight->val && BottomLeft->val && BottomRight->val;
        return root;
    }
};

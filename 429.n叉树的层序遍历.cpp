/*
 * @lc app=leetcode.cn id=429 lang=cpp
 *
 * [429] N叉树的层序遍历
 */
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        vector<vector<int>> re;
        queue<Node *> p;
        queue<Node *> c;
        p.push(root);
        while(!p.empty()) {
            vector<int> v;
            while(!p.empty()) {
                Node * pn = p.front();
                p.pop();
                vector<Node *>::iterator it = pn->children.begin();
                for(;it != pn->children.end(); ++it) c.push(*it);
                v.push_back(pn->val);
            }
            if(!v.empty()) re.push_back(v);
            while(!c.empty()) {
                p.push(c.front());
                c.pop();
            }
        }
        return re;
    }
};

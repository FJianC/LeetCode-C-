/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词模式
 */
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        // vector<string> v;
        // int pos = 0;
        // int i = 0;
        // for(; i < str.length(); i++) {
        //     if(str[i] == ' ') {
        //         v.push_back(str.substr(pos, i-pos));
        //         pos = i + 1;
        //     }
        // }
        // if(pos < i) v.push_back(str.substr(pos, i-pos));
        // if(pattern.length() != v.size()) return false;
        // for(int i = 0; i < pattern.length(); i++) {
        //     for(int j = i + 1; j < pattern.length(); j++) {
        //         if(pattern[i] == pattern[j]) {
        //             if(v[i] != v[j]) return false;
        //         } else {
        //             if(v[i] == v[j]) return false;
        //         }
        //     }
        // }
        // return true;
        map<char, int> p2i;
        map<string, int> w2i;
        istringstream in(str);
        int i = 0, n = pattern.size();
        for (string word; in >> word; ++i) {
            if (i == n || p2i[pattern[i]] != w2i[word])
                return false;
            p2i[pattern[i]] = w2i[word] = i + 1;
        }
        return i == n;
    }
};

#include "head.hpp"
#include <vector>

class ShuDu {
public:
#define CAL(i, j) (i < 3 ? 10 : (i > 5 ? 30 : 20)) + (j < 3 ? 1 : (j > 5 ? 3 : 2))
    vector<vector<int> > vec;
    map<int, set<int> > l_map;  // 行
    map<int, set<int> > m_map;  // 列
    map<int, set<int> > n_map;  // 九宫格
public:
    ShuDu() {
        // vector<vector<int> > vec = 
        //     {
        //         {1, 2, 3, 4, 5, 6, 7, 8, 9}, 
        //         {4, 5, 6, 7, 8, 9, 1, 2, 3}, 
        //         {7, 8, 9, 1, 2, 3, 4, 5, 6}, 
        //         {2, 3, 4, 5, 6, 7, 8, 9, 1}, 
        //         {5, 6, 7, 8, 9, 1, 2, 3, 4}, 
        //         {8, 9, 1, 2, 3, 4, 5, 6, 7}, 
        //         {3, 4, 5, 6, 7, 8, 9, 1, 2}, 
        //         {6, 7, 8, 9, 1, 2, 3, 4, 5}, 
        //         {9, 1, 2, 3, 4, 5, 6, 7, 8}
        //     };
        // vector<vector<int> > vec = 
        //     {
        //         {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //         {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //         {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //         {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //         {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //         {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //         {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //         {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //         {0, 0, 0, 0, 0, 0, 0, 0, 0},
        //     };
        vec = 
            {
                {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
                {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
                {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
                {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
                {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
                {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
                {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
                {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
                {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
            };
        {
            string ss;
            cin >> ss;
            int i = 0;
            int j = 0;
            for (const auto& s : ss) {
                vec[i][j] = s - 48;
                if (++j >= vec[0].size()) { j = 0; ++i; }
                if (i >= vec.size()) break;
            }
        }
        for (int i = 0; i < vec.size(); ++i) {
            cout << endl;
            for (int j = 0; j < vec[0].size(); ++j) {
                cout << vec[i][j] << ((j + 1) % 3 ? "," : "|");
                if (vec[i][j] == 0) continue;
                l_map[i].insert(vec[i][j]);
                m_map[j].insert(vec[i][j]);
                n_map[CAL(i, j)].insert(vec[i][j]);
            }
        }
        cout << endl;
        if (func2(0,0)) {
            for (int i = 0; i < vec.size(); ++i) {
                cout << endl;
                for (int j = 0; j < vec[0].size(); ++j) {
                    cout << vec[i][j] << ((j + 1) % 3 ? "|" : ",");
                }
            }
            cout << endl;
        } else {
            cout << "fail" << endl;
        }
    }

    bool func2(int i, int j) {
        if (j >= vec[0].size()) { j = 0; ++i; }
        if (i >= vec.size()) return true;

        if (vec[i][j] != 0) {
            return func2(i, j + 1);
        }

        for (int a = 1; a <= 9; ++a) {
            if (l_map[i].count(a) == 0 &&
                m_map[j].count(a) == 0 &&
                n_map[CAL(i, j)].count(a) == 0
                ) {
                
                auto old = vec[i][j];
                vec[i][j] = a;
                l_map[i].insert(a);
                m_map[j].insert(a);
                n_map[CAL(i, j)].insert(a);

                if (func2(i, j + 1)) return true;

                vec[i][j] = old;
                l_map[i].erase(a);
                m_map[j].erase(a);
                n_map[CAL(i, j)].erase(a);
            }
        }
        return false;
    }
};



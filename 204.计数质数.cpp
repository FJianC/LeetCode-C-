/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 *
 * https://leetcode-cn.com/problems/count-primes/description/
 *
 * algorithms
 * Easy (27.14%)
 * Total Accepted:    15.7K
 * Total Submissions: 58K
 * Testcase Example:  '10'
 *
 * 统计所有小于非负整数 n 的质数的数量。
 *
 * 示例:
 *
 * 输入: 10
 * 输出: 4
 * 解释: 小于 10 的质数一共有 4 个, 它们是 2, 3, 5, 7 。
 *
 *
 */
class Solution {
public:
    int countPrimes(int n) {
        // if (n < 3) return 0;
        // int re = 1;
        // for (int i = 3; i < n; i += 2) {
        //     bool flag = true;
        //     for (int j = 3; j <= sqrt(i); j += 2) {
        //         if (i % j == 0) {
        //             flag = false;
        //             break;
        //         }
        //     }
        //     if (flag) re++;
        // }
        // return re;
        if(!n) return 0;
        vector<bool> prime(n, true);
        prime[0] = false, prime[1] = false;
        for (int i = 0; i < sqrt(n); ++i) {
            if (prime[i]) {
                for (int j = i*i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }
        return count(prime.begin(), prime.end(), true);
    }
};

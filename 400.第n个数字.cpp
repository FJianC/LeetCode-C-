/*
 * @lc app=leetcode.cn id=400 lang=cpp
 *
 * [400] 第N个数字
 */
class Solution {
 public:
  int findNthDigit(int n) {
    // !fail
    // int add = 1;
    // int flag = 10;
    // long sum = 0;
    // int i = 1;
    // for(; i <= n; ++i) {
    //     if(i % flag == 0) {
    //         add++;
    //         flag *= 10;
    //     }
    //     sum += add;
    //     if(sum >= n) break;
    // }
    // int j = n-sum+add;
    // // while(j++ < add) i /= 10;
    // // return i % 10;
    // return to_string(i)[j - 1] - '0';
    if (n < 10) return n;
    // step 1
    long long length = 0, cnt = 9, i = 1;
    for (; length + cnt * i < n; ++i) {  // step 2
      length += cnt * i;
      cnt *= 10;
    }  // step 3
    long long num = pow(10, i - 1) - 1 + (n - length + 1) / i;
    long long index = (n - length - 1) % i;
    return to_string(num)[index] - '0';
  }
};

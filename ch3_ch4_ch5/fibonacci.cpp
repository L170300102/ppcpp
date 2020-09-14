/*
 * @Author: seo junhyeok
 * @Date: 2020-09-13 16:40:28
 * @LastEditTime: 2020-09-13 17:06:45
 * @Description: writes out the first so many values of the Fibonacci series, that is, the series that starts with 1 1 2 3 5 8 13 21 34. The next number of the series is the sum of the two previous ones. Find the largest Fibonacci number that fits in an int.
 */
#include "std_lib_facilities.h"
void fi(int n) {
    // cout << INT_MAX << endl; // 2147483647
    vector<int> v(n);
    v[0] = 1;
    v[1] = 1;
    cout << v[0] << ' ' << v[1] << ' ';
    for (int i = 2; i < v.size(); i++) {
        v[i] = v[i - 2] + v[i - 1];
        if (v[i] < INT_MAX && v[i] > 0) {
            cout << "v[" << i << "]: " << v[i] << endl;
        }
    }
}
int main() {
    constexpr int n = 46;
    fi(n);
}
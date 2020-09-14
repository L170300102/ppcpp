/*
 * @Author: seo junhyeok
 * @Date: 2020-09-13 14:08:58
 * @LastEditTime: 2020-09-13 16:31:29
 * @Description: 
 */

#include "std_lib_facilities.h"
int main() {
    vector<int> v;
    for (int i; cin >> i;) v.push_back(i);
    cin.clear();
    fflush(stdin);
    for (int i : v) cout << i << ' ';
    cout << endl;
    int n = 0;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        sum += v[i];
    }
    cout << sum;
}
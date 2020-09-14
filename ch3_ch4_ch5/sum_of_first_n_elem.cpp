/*
 * @Author: seo junhyeok
 * @Date: 2020-09-13 13:30:33
 * @LastEditTime: 2020-09-13 15:30:40
 * @Description: After the inputs all the num, ask how many of the nums wants to sum. For an answer N, print the sum of the first N elements of the vector.
 * For example: 
 * 12 23 13 24 15
 * 3
 * 12 + 23 + 13 = 48
 */
#include "std_lib_facilities.h"
void sum(vector<int> vi) {
    int sum = 0, n = 0;
    cout << "Please enter how many of the numbers you wish to sum, starting from the first:" << endl;
    cin >> n;
    if (n > vi.size()) cerr << "Range error!!!";
    for (int i = 0; i < n; ++i) {
        sum += vi[i];
    }
    cout << "The sum of the first " << n << " numbers: ";
    for (int i = 0; i < n - 1; ++i) cout << vi[i] << ", ";
    if (n > 2)
        cout << "and " << vi[n - 1] << " is " << sum << ".\n";
    else if (n <= 2)
        cout << vi[n - 1] << " is " << sum << ".\n";
}
int main() {
    cout << "Please enter some numbers (press '|' at prompt to stop):" << endl;
    vector<int> vi;
    // for (int a; cin >> a;) vi.push_back(a);
    int a;
    while (cin >> a) {
        cerr << "WRONG INTEGER!\n";
        vi.push_back(a);
    }
    cin.clear();
    fflush(stdin);

    sum(vi);
}

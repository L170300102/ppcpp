/*
 * @Author: seo junhyeok
 * @Date: 2020-09-10 12:16:57
 * @LastEditTime: 2020-09-13 11:06:18
 * @Description: Find and remove all errors in each program fragment.
 */
#include "std_lib_facilities.h"
int main() {
    try { /* 
        if (true)
            cout << "Success!\n";
        else
            cout << "Fail!\n";

        string s = "ape";
        if (s != "fool") cout << "Success!\n";

        vector<char> v(5);
        for (int i = 0; i < v.size(); ++i)
            cout << i << '\n';
        cout << "Success!\n15.";

        s = "Success!\n";
        for (int i = 0; i < s.size(); ++i) cout << s[i];
 */
        /* int x = 2000;
        char c = x;
        cout << c << '\n';
        if (x == 2000) cout << "Success!\n"; */

        //18.
        /*         string s = "Success!\n";
        for (int i = 0; i < s.size(); ++i) cout << s[i]; */

        // 19.
        /* vector<int> v(5);
        for (int i = 0; i <= v.size(); ++i)
            ;
        cout << "Success!\n";
 */
        /* 
        // 20.
        int i = 0;
        int j = 9;
        while (i < 10) {
            i++;
        }
        //cout << "i: " << i << ", j: " << j << '\n';
        if (j < i) cout << "Success!\n";
 */

        // 22.
        /* vector<string> s;
        s.push_back("Success!\n");
        for (int i = 0; i < s.size(); ++i) cout << s[i]; */

        // 23.
        /* int i = 0;
        int j = 0;
        while (i < 10) ++i;
        if (j < i) cout << "Success!\n"; */

        // 24.
        /* int x = 4;
        double d = 5 / (double)(x - 2);
        cout << "d == " << 5 / (x - 2.0) << ", stmt: " << 2 * x - 5.5;
        if (d == 2 * x - 5.5) cout << "Success!\n"; */

        // 25.
        cout << "Success!\n";
        //
        //keep_window_open();
        return 0;
    } catch (exception& e) {
        cerr << "Error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    } catch (...) {
        cerr << "Oops: Unknown exception!\n";
        keep_window_open();
        return 2;
    }
}
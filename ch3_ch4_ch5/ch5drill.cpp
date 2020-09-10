/*
 * @Author: seo junhyeok
 * @Date: 2020-09-10 12:16:57
 * @LastEditTime: 2020-09-10 20:32:50
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
        int x = 2000;
        char c = static_cast<char>(x);
        cout << x << '\n'
             << c;
        if (c == 2000) cout << "Success!\n";

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
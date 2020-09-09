// 5.6.3 Handle wrong input
#include "std_lib_facilities.h"
void myerror(string s1, string s2) {
    throw runtime_error(s1 + s2);
}
double some_function() {
    double d = 0;
    cin >> d;
    if (!cin) myerror("'Can't read double from some_function()' ", "hhhh");
    return d;
}
int main() {
    try {
        double d = some_function();
        cout << d;
        return 0;  // 0 means success
    } catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;  // 1 means failed
    } catch (...) {
        cerr << "unknown exception!\n";
        keep_window_open();
        return 2;  // 2 means failed
    }
}
# include "std_lib_facilities.h"
int main() {
    string x1, x2, x3, hnum, lnum;
    cout << "Enter three integers: ";
    cin >> x1 >> x2 >> x3;
    // x1 ? x2
    if (x1 <= x2){
        hnum = x2;
        lnum = x1;
    }
    else{
        hnum = x1;
        lnum = x2;
    }
    // hnum ? x3
    if (hnum <= x3)
        cout << lnum << ',' << hnum << ',' << x3;
    else
    {
        if (lnum <= x3)
            cout << lnum <<','<< x3 <<','<< hnum;
        else
            cout << x3 << ',' << lnum << ',' << hnum;
    }
}
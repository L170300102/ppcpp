#include "std_lib_facilities.h"
int main() {
    double temp = 0, smallest_val = 0, largest_val = 0, sum_of_vals = 0, sum_metr = 0;
    vector<double> vals;
    string unit = " ";  // 1m = 100cm, 1in = 2.54cm, 1ft = 12in
    constexpr double cm_per_in = 2.54;
    constexpr double cm_per_m = 100;
    constexpr double in_per_ft = 12;  // 1ft = 12in = 12*2.54cm
    constexpr double cm_per_ft = 30.48;

    while (cin >> temp >> unit) {
        if (unit == "m" || unit == "cm" || unit == "in" || unit == "ft" || unit == "") {
        } else {
            cout << "Sorry, cannot recoginze " << unit << '\n';
            break;
        }
        if (unit == "cm")
            temp /= 100;  // xcm = x/100m
        else if (unit == "in")
            temp = 2.54 * temp / 100;  // xin = 2.54xcm = 2.54x/100m
        else if (unit == "ft")
            temp = 12 * 2.54 / 100 * temp;  // xft = 12xin = 12*2.54*x/100m
        else {
        }
        vals.push_back(temp);
        //cout << temp << '\n';
        sort(vals);
        for (int i = 0; i < vals.size(); ++i) {
            if (temp == vals[0])
                //cout << temp << " is smallest value so far.\n";
                smallest_val = temp;
            else if (temp == vals[vals.size() - 1])
                //cout << temp << " is largest value.\n";
                largest_val = temp;
        }

        if (smallest_val == temp)
            cout << smallest_val << " is smallest value so far.\n";

        else if (largest_val == temp)
            cout << largest_val << " is largest value so far.\n";
    }
    cout << "End of loop\n";
    for (int i = 0; i < vals.size(); ++i) sum_of_vals += vals[i];
    // sum_metr = sum_of_vals / 100;
    cout << "smallest value: " << smallest_val << "\nlargest value: " << largest_val << "\nsize of values: " << vals.size() << "\nSum of values: " << sum_metr << "m" << '\n';
}
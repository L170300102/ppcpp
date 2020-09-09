#include "std_lib_facilities.h"

constexpr double cm_to_m{0.01};
constexpr double in_to_m{2.54 * cm_to_m};
constexpr double ft_to_m{12.0 * in_to_m};
const vector<string> legal_units{"cm", "m", "in", "ft"};

bool legal_unit(string unit) {
    bool legal = false;
    for (auto legal_unit_i : legal_units) {
        if (unit == legal_unit_i) legal = true;
    }
    return legal;
}

void print_legal_units() {
    cout << "\tcm for centimeters\n"
         << "\tm for meters\n"
         << "\tin for inches\n"
         << "\tft for feet\n";
}

double convert_to_meter(double val, string unit) {
    if ("cm" == unit)
        return val * cm_to_m;
    else if ("in" == unit)
        return val * in_to_m;
    else if ("ft" == unit)
        return val * ft_to_m;
    else
        return val;
}

int main() {
    cout << "Enter a double value followed by a unit with or without a space in between (followed by 'Enter'): \n";

    bool first{true};
    double val{0.0};
    double val_meter{0.0};
    double smallest{0.0};
    double largest{0.0};
    string unit{" "};
    int count{0};
    double sum{0.0};

    print_legal_units();

    while (cin >> val >> unit) {
        if (legal_unit(unit)) {
            val_meter = convert_to_meter(val, unit);
            cout << val << unit;
            if (unit != "m") cout << " (" << val_meter << "m)";

            if (count == 0) {
                smallest = val_meter;
                largest = val_meter;
                cout << " is the first value and therefore the smallest and largest so far.\n";
            }

            else if (val_meter < smallest) {
                cout << " the smallest so far.\n";
                smallest = val_meter;
            } else if (val_meter > largest) {
                cout << " the largest so far.\n";
                largest = val_meter;
            } else
                cout << '\n';
            sum += val_meter;
            count++;
        } else {
            cout << "Error: no legal unit. Enter one of \n";
            print_legal_units();
        }
    }

    cout << "The smallest: " << smallest << "m\n"
         << "The largest: " << largest << "m\n"
         << "Number of values entered: " << count << '\n'
         << "The sum of values: " << sum << "m\n";
}
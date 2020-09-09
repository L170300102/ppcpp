/*
 * logic_err.cpp
 * 
 * When the temp data are all negative or positive,
 * make a program where the min or max temp is 0.
 * And it fixes these logic errors.
 * 
 * junhseo, 200909. v1.0
 */

#include "std_lib_facilities.h"
int main() {
    vector<double> temps;  // temperature data

    double sum = 0;
    double high_temp = 0;
    double low_temp = 0;
    int no_of_temps = 0;
    double dt;
    cin >> dt;
    high_temp = low_temp = dt;
    ++no_of_temps;
    sum += dt;
    cout << "continue enter  temp\n";
    for (double temp; cin >> temp;) {  // Read data and store it in temps
        ++no_of_temps;                 // Counting the number of temps
        sum += temp;                   // Calculate sum

        if (temp > high_temp) high_temp = temp;  // find the highest temp
        if (temp < low_temp) low_temp = temp;    // Find the lowest temp
    }

    cout << "Highest temp: " << high_temp << '\n';
    cout << "Lowest temp: " << low_temp << '\n';
    cout << "Average temp: " << sum / no_of_temps << '\n';
}
/*
 * @Author: seo junhyeok
 * @Date: 2020-09-13 11:11:33
 * @LastEditTime: 2020-09-13 11:56:21
 * @Description: chapter 5 exercise
 */
#include "std_lib_facilities.h"
//converts Celcius to Kelvin.
double ctok(double c) {
    double k = 0;
    if (c < -273.15) {
        error("below -273.15'c");
        return 1;
    } else
        k = c + 273.15;
    return k;
}
// Converts Kelvin to Celcius.
double ktoc(double k) {
    double c = 0;
    if (k < 0) {
        error("k must over 0!");
        return 2;
    } else {
        c = k - 273.15;
        return c;
    }
}
int main() {
    double c = 0;  // declare input value
    cout << "Input Celcius temperature: ";
    cin >> c;                                  // retrieve temp to input value
    double k = ctok(c);                        // convert temp
    cout << "\nResult: " << k << 'k' << endl;  // print out temp

    cout << "Input Kelvin temperature: ";
    double myk = 0;                              // declare input k value
    cin >> myk;                                  // retrieve k temp to input value
    double myc = ktoc(myk);                      // convert k to c
    cout << "\nResult: " << myc << 'c' << endl;  // print out c temp
}
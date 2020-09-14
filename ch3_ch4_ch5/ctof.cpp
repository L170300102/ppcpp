// ctof.cpp
/*
 * @Author: seo junhyeok
 * @Date: 2020-09-13 12:01:19
 * @LastEditTime: 2020-09-13 12:28:18
 * @Description: Converts Celcius to Fahrenheit 
 */
#include "std_lib_facilities.h"
// Converts Celcius to Fahrenheit
double ctof(double dc) {
    double df = 9.0 / 5 * dc + 32;
    return df;
}
//Converts Fahrenheit to Celcius
double ftoc(double df) {
    double dc = (df - 32) * (5.0 / 9);
    return dc;
}
int main() {
    double dc = 0;         // declare input value
    cin >> dc;             // retrieve temp to input value
    double df = ctof(dc);  // celc to fahr
    double mc = ftoc(df);  // fahr to celc
    cout << df << ',' << mc << endl;
}
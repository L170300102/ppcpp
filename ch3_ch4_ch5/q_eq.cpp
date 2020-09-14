/*
 * @Author: seo junhyeok
 * @Date: 2020-09-13 12:53:51
 * @LastEditTime: 2020-09-13 13:27:03
 * @Description: solve quadratic equations
 */
#include "std_lib_facilities.h"
// calculate x for a quadratic equation
// if b^2 - 4ac is less than 0, then it will fail
void quad(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    double x1, x2;
    double rp, ip;
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
    } else if (discriminant == 0) {
        x1 = x2 = -b / 2 * a;
    } else if (discriminant < 0) {
        rp = -b / (2 * a);
        ip = sqrt(-discriminant) / (2 * a);
        cout << "x1 = " << rp << '+' << ip << 'i' << endl;
        cout << "x2 = " << rp << '-' << ip << 'i' << endl;
    }
    if (discriminant >= 0) {
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
}
int main() {
    cout << "Enter coefficients a, b, c: ";
    double a, b, c;
    cin >> a >> b >> c;
    cout << a << ' ' << b << ' ' << c << endl;
    quad(a, b, c);
}
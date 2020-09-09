#include "std_lib_facilities.h"
int main()
{
    int cent, penny, nickel, dime, quarter, hdollar, dollar;
    double d_count;
    cout << "Enter the number of pennies, nickels, dimes, quarters, half dollars, dollars.\n";
    cout << "How many pennies do you have: ";
    cin >> penny;
    if (penny == 1) cout << "You have " << penny << " penny.\n";
    else
        cout << "You have " << penny << " pennies.\n";
        
    cout << "How many nickels do you have: ";
    cin >> nickel;
    if(nickel==1)cout << "You have " << nickel << " nickel.\n";
    else
        cout << "You have " << nickel << " nickels.\n";

    cout << "How many dimes do you have: ";
    cin >> dime;
    if (dime==1) cout << "You have " << dime << " dime.\n";
    else
        cout << "You have " << dime << " dimes.\n";

    cout << "How many quarters do you have: ";
    cin >> quarter;
    if(quarter==1) cout << "You have " << quarter << " quarter.\n";
    else
        cout << "You have " << quarter << " quarters.\n";

    cout << "How many half dollars do you have: ";
    cin >> hdollar;
    if(hdollar==1)cout << "You have " << hdollar << " half dollar.\n";
    else
        cout << "You have " << hdollar << " half dollars.\n";

    cout << "How many dollars do you have: ";
    cin >> dollar;
    if(dollar==1) cout << "You have " << dollar << " dollar.\n";
    else
        cout << "You have " <<  dollar << " dollars.\n";

    cent = penny + 5 * nickel + 10 * dime + 25 * quarter + 50 * hdollar + 100 * dollar;
    // cout << "The value of all of your coins is " << cent << " cents.\n";
    d_count = cent/100.0;
    cout << '$' << d_count << '\n';
    /*
    nickel = 5 * penny;
    dime = 10 * penny;
    quarter = 25 * penny;
    hdollar = 50 * penny;
    dollar = 100 * penny;
    */
}
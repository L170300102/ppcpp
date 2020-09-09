#include "std_lib_facilities.h"
int main()
{
    char unit='a'; //yen, euro, pound, dollor
    double amount, dollar;
    cout << "ex) 10y, 2u, 4p, 6n, 9k. Enter: ";
    cin >> amount >> unit;
    /*
     *
    if (unit=='y'){
        dollar = 0.0094 * amount;
        cout << amount << "yen equals " << dollar << '\n';
    }
    else if (unit=='e'){
        dollar = 1.19 * amount;
        cout << amount << "euro equals " << dollar << '\n';
    }
    else if (unit=='p'){
        dollar = 1.31 * amount;
        cout << amount << "pound equals " << dollar << '\n';
    }
    else
        cout << "cannot recognize " << unit << " unit.";
    */
    switch (unit) {
        case 'y':
            dollar = 0.0094 * amount;
            cout << amount << "yen equals " << dollar << '\n';
            break;
        case 'u' :
            dollar = 1.19 * amount;
            cout << amount << "euro equals " << dollar << '\n';
            break;
        case 'p': 
            dollar = 1.31 * amount;
            cout << amount << "pound equals " << dollar << '\n';
            break;
        case 'n':
            dollar = 0.14 * amount;
            cout << amount << " yuan equals " << dollar << '\n';
            break;
        case 'k':
            dollar = 0.11 * amount;
            cout << amount << " krone equals " << dollar << '\n';
            break;
        default:
            cout << "cannot recognize " << unit << " unit.";
            break;
    }
}
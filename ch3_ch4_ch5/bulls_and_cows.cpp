/*
 * @Author: seo junhyeok
 * @Date: 2020-09-13 17:46:10
 * @LastEditTime: 2020-09-14 17:28:26
 * @Description: The program has a vector of four integers in the range 0 to 9 and it is the user's task to discover those numbers by repeated guesses. Say the number to be guessed is 1234 and the user guesses 1359; the response should be "1 bull and 1 cow" because the user got one digit(1) right and in the right position(a bull) and one digit (3) right but in the wrong position(a cow). The guessing continues until the user gets four bulls, that is, has the four digits correct and in the correct order.
 */
#include "std_lib_facilities.h"

int main() {
    cout << "guess number: ";
    string secret = "1234";
    string guess;
    int A = 0, B = 0;
    cin >> guess;

    for (int i = 0; i < secret.size(); i++) {
        if (secret[i] == guess[i]) {
            A++;
        }
    }

    for (int i = 0; i < secret.size(); i++) {
        if ((secret.find(guess[i]) != string::npos) && secret[i] != guess[i]) {
            B++;
        }
    }

    cout << A << 'A' << B << 'B';
}
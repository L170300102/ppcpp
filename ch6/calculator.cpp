/*
 * @Author: seo junhyeok
 * @Date: 2020-09-18 22:54:25
 * @LastEditTime: 2020-09-18 23:09:04
 * @Description: 사칙연산 계산기
 */
#include <std_lib_facilities.h>

int main() {
    cout << "표현식 입력 (+, -, *, / 처리함)\n";
    cout << "표현식의 끝에 x를 입력 (ex: 1+2*3x): ";
    int lval = 0;
    int rval;
    cin >> lval;  // 가장 왼쪽 피연산자 입력
    if (!cin) error("첫 번째 피연산자가 없음");
    for (char op; cin >> op;) {  // 연산자와 오른쪽 피연산자 반복 입력
        if (op != 'x') cin >> rval;
        if (!cin) error("두 번째 피연산자가 없음");
        switch (op) {
            case '+':
                lval += rval;  // 덧셈: lval = lval + rval
                break;
            case '-':
                lval -= rval;  // 뺄셈: lval = lval - rval
                break;
            case '*':
                lval *= rval;  // 곱셈: lval = lval * rval
                break;
            case '/':
                lval /= rval;  // 나눗셈: lval = lval / rval
                break;
            default:  // 허용되지 않는 연산자: 결과를 출력함
                cout << "결과: " << lval << '\n';
                //keep_window_open();
                return 0;
        }
    }
    error("잘못된 표현식");
}
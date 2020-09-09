#include "std_lib_facilities.h"

class Bad_area {};  // area()에서 오류 보고에 사용할 타입

char ask_user(string question) {
    cout << question << "? (yes or no)\n";
    string answer = " ";
    cin >> answer;
    if (answer == "y" || answer == "yes") return 'y';
    if (answer == "n" || answer == "no") return 'n';
    return 'b';
}

int area(int length, int width) {
    if (length <= 0 || width <= 0) throw Bad_area{};
    return length * width;
}

int framed_area(int x, int y) {
    constexpr int frame_width = 2;
    if (x - frame_width <= 0 || y - frame_width <= 0)
        error("framed width > x or y");
    return area(x - frame_width, y - frame_width);
}

int f(int x, int y, int z) {
    int area1 = 0;
    area1 = area(x, y);
    if (area1 <= 0) error("need positive");
    int area2 = framed_area(1, z);
    int area3 = framed_area(y, z);
    double ratio = double(area1) / area3;
    // 확인 코드 추가 및 테스트
    cout << "ratio: " << ratio << '\n';
    cout << "area2: " << area2 << '\t' << "area3: " << area3 << '\n';
    return area1;
}

int main() {
    try {
        int x = -1;
        int y = 2;
        int z = 4;
        int area1 = area(x, y);
        int area2 = framed_area(1, z);
        int area3 = framed_area(y, z);
        double ratio = area1 / area3;
    } catch (Bad_area) {
        cout << "Oops! Invalid argument passed to area()\n";
    }
}
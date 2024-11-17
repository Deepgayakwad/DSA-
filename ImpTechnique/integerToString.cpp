#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int number = -123;  // You can test with 0 or other numbers
    bool isNegative = false;

    if (number < 0) {
        isNegative = true;
        number = abs(number);  // Assume positive for calculation
    }

    string ans = "";

    if (number == 0) {  // Handle edge case for 0
        ans = "0";
    } else {
        while (number > 0) {
            ans += ((number % 10) + '0');
            number = number / 10;
        }

        if (isNegative) {
            ans += '-';
        }

        reverse(ans.begin(), ans.end());
    }

    cout << ans << endl;
    return 0;
}

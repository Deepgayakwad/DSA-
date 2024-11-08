#include <iostream>
#include <string>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.size() != goal.size()) return false;

    string doubled = s + s;  // Concatenate s with itself

    // Check if goal is a substring of doubled
    return doubled.find(goal) != string::npos;
}

int main() {
    string s = "abcde";
    string goal = "cdeab";

    // Output the result in a more readable format
    if (rotateString(s, goal)) {
        cout << "String \"" << goal << "\" is a rotation of \"" << s << "\"" << endl;
    } else {
        cout << "String \"" << goal << "\" is NOT a rotation of \"" << s << "\"" << endl;
    }

    return 0;
}

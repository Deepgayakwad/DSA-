#include <iostream>
#include <algorithm> // For std::reverse
#include <string>    // For std::string

int main() {
    std::string str = "Hello, World!";

    // Use std::reverse to reverse the string
    std::reverse(str.begin(), str.end());

    std::cout << "Reversed string: " << str << std::endl;

    return 0;
}
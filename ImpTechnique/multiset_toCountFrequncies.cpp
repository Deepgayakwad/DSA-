#include <iostream>
#include <set>

using namespace std;

int main() {
  // multiset allows duplicate values 
    multiset<int> numbers = {1, 3, 2, 3, 4, 1, 5, 3};

    // Counting occurrences of '3'
    cout << "Count of 3: " << numbers.count(3) << endl;

    return 0;
}

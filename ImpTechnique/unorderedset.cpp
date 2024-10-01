#include <iostream>
#include <unordered_set>  // Include the correct library

using namespace std;

int main() {
    unordered_set<int> mySet = {1, 2, 3, 4, 5};  // Correct set initialization

    int element = 6;


  //  to check whether the given element is present in set or not 

    if (mySet.count(element)) {
         cout << "Element " << element << " is present in the set." << endl;
    } else {
        cout << "Element " << element << " is not present in the set." << endl;
    }

    // iterate in the set 
    for(int element : mySet){
        cout << element << " " << endl;
    }

    return 0;
}

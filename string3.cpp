#include <iostream>
#include <map>
#include <string>
using namespace std;
int romanToInt(const string& s) {
    map<char, int> romanToValue = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500},
        {'M', 1000}
    };
    int total = 0;
    int prevValue = 0;
    for (char c : s) {
        int currentValue = romanToValue[c];
        if (prevValue < currentValue) {
            total += currentValue - 2 * prevValue;
        } else {
            total += currentValue;
        }
        prevValue = currentValue;
    }

    return total;
}
int main() {
    string roman;
    cout << "Enter a Roman numeral: ";
    cin >> roman;
    int result = romanToInt(roman);
    cout << "The integer value is: " << result << endl;
    return 0;
}

/*WAP to reverse the string word wise*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str, word, result;
    cout << "Enter the string: ";
    while (cin >> word) {
        result = word + " " + result;
        if (cin.peek() == '\n') {
            break;
        }
    }
    if (!result.empty()) {
        result.pop_back();
    }
    cout << result << endl;

    return 0;
}

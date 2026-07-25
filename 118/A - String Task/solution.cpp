#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    for (char ch : s) {
        ch = tolower(ch);
 
        if (ch != 'a' && ch != 'o' && ch != 'y' &&
            ch != 'e' && ch != 'u' && ch != 'i') {
            cout << "." << ch;
        }
    }
 
    return 0;
}
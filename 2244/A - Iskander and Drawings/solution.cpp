#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int ans = 0;
        int cnt = 0;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                cnt++;
            } else {
                ans = max(ans, (cnt + 1) / 2);
                cnt = 0;
            }
        }
 
        // Check the last block of '#'
        ans = max(ans, (cnt + 1) / 2);
 
        cout << ans << endl;
    }
 
    return 0;
}
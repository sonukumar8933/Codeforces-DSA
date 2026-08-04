#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        // Initial compressed length = number of groups
        int groups = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                groups++;
        }
 
        int ans = groups;
 
        // Try deleting each valid character
        for (int i = 1; i <= n - 2; i++) {
 
            int change = 0;
 
            // Boundary between (i-1, i)
            if (s[i - 1] != s[i])
                change--;
 
            // Boundary between (i, i+1)
            if (s[i] != s[i + 1])
                change--;
 
            // New boundary after deletion
            if (s[i - 1] != s[i + 1])
                change++;
 
            ans = min(ans, groups + change);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n + 1);
 
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
 
        if (n % 2 != 0) {
            cout << "NO
";
            continue;
        }
 
        long long minodd = LLONG_MAX;
        long long maxeven = LLONG_MIN;
 
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1)
                minodd = min(minodd, a[i]);
            else
                maxeven = max(maxeven, a[i]);
        }
 
        if (minodd - maxeven >= 2)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}
#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    // Generate the first n odd numbers: 1, 3, 5, ..., 2n-1
    for (int i = 0; i < n; ++i) {
        cout << (2 * i + 1) << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}
 
int main() {
    // Optimize standard I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
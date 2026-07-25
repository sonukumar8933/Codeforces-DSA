#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
/**
 * Problem: Another Sorting Problem
 * Logic: Find the maximum required increase to fix adjacent inversions, 
 * then greedily verify if that increase allows for a sorted sequence.
 */
 
void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    // 1. Find the minimum required k (maximum drop)
    long long k = 0;
    bool already_sorted = true;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            already_sorted = false;
            k = max(k, a[i] - a[i + 1]);
        }
    }
 
    // If already sorted, the answer is Yes
    if (already_sorted) {
        cout << "Yes" << endl;
        return;
    }
 
    // 2. Greedily verify if this k works
    vector<long long> b(n);
    b[0] = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] >= b[i - 1]) {
            // Keep the value as a[i] to leave more room for future elements
            b[i] = a[i];
        } else if (a[i] + k >= b[i - 1]) {
            // Must use the operation for this element
            b[i] = a[i] + k;
        } else {
            // Impossible to make b[i] >= b[i-1] even with +k
            cout << "No" << endl;
            return;
        }
    }
 
    cout << "Yes" << endl;
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}
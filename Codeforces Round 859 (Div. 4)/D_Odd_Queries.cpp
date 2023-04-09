#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            int len = r - l + 1;
            if (len % 2 == 0 && k % 2 == 0) {
                // even length and even k, no change in parity
                cout << "NO\n";
            } else if (len % 2 == 1 && k % 2 == 0) {
                // odd length and even k, no change in parity
                cout << "NO\n";
            } else {
                // otherwise, the parity changes
                int diff = (k * len) - (sum - a[l-1] - a[r-1]);
                if (diff % 2 == 0) {
                    cout << "NO\n";
                } else {
                    cout << "YES\n";
                }
            }
        }
    }
    return 0;
}

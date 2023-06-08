#include <iostream>
#include <vector>

using namespace std;

string solveTestCase(int n, vector<int>& a) {
    bool hasEven = false, hasOdd = false;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            hasEven = true;
        else
            hasOdd = true;
    }

    if (hasEven && hasOdd)
        return "NO";
    else
        return "YES";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string result = solveTestCase(n, a);
        cout << result << endl;
    }

    return 0;
}

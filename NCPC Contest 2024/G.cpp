#include <bits/stdc++.h>
using namespace std;

int findMinimumSubarrayRemoval(const vector<int>& A, const vector<int>& B) {
    int n = B.size();
    int maxLength = 0;

    // Use two pointers to find the longest subsequence of B in A
    for (int start = 0; start < n; ++start) {
        int i = 0, j = start;
        while (i < A.size() && j < n) {
            if (A[i] == B[j]) {
                j++;
            }
            i++;
        }
        maxLength = max(maxLength, j - start);
    }

    // The minimum length to remove is the total length minus the longest matching subsequence
    return n - maxLength;
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        for (int& a : A) cin >> a;
        for (int& b : B) cin >> b;

        int minDeletionLength = findMinimumSubarrayRemoval(A, B);

        cout << "Case " << t << ": " << minDeletionLength << endl;
    }
    return 0;
}

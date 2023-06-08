#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> restoreWeather(int n, int k, vector<int>& a, vector<int>& b) {
    vector<int> result(n);
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[b[i]]++;
    }

    for (int i = 0; i < n; i++) {
        int targetTemp = a[i];
        int lowerBound = targetTemp - k;
        int upperBound = targetTemp + k;

        for (int temp = lowerBound; temp <= upperBound; temp++) {
            if (freq[temp] > 0) {
                result[i] = temp;
                freq[temp]--;
                break;
            }
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> result = restoreWeather(n, k, a, b);
        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

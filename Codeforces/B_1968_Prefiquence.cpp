#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isSubsequence(const string& a, const string& b) {
    int j = 0;
    for (char c : b) {
        if (j < a.size() && a[j] == c) {
            j++;
        }
    }
    return j == a.size();
}

int maxSubsequenceLength(const string& a, const string& b) {
    int left = 0, right = a.size();
    while (left < right) {
        int mid = (left + right + 1) / 2;
        string prefix_a;
        for (int i = 0; i < mid; ++i) {
            prefix_a += a[i];
        }
        if (isSubsequence(prefix_a, b)) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        cout << maxSubsequenceLength(a, b) << endl;
    }
    return 0;
}

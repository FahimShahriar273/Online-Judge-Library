
#include <iostream>
#include <cmath>
using namespace std;


int min_blending_time(long long n, long long x, long long y) {
    if (n == 0) {
        return 0;
    }
    return (n + min(x, y) - 1) / min(x, y);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        cout << min_blending_time(n, x, y) << endl;
    }
    return 0;
}

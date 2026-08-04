#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long total_sum = 0;
    while (n--) {
        long long p;
        cin >> p;

        long long exponent = p % 10;
        long long base = p / 10;

        long long term = 1;
        for (int i = 0; i < exponent; ++i) {
            term *= base;
        }

        total_sum += term;
    }

    cout << total_sum << "\n";

    return 0;
}
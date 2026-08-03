#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int cnt[105];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    for (int g = 100; g >= 1; --g) {
        int total_divisible = 0;
        for (int v = g; v <= 100; v += g) {
            total_divisible += cnt[v];
        }
        
        if (total_divisible >= n - 1) {
            cout << g << "\n";
            return 0;
        }
    }

    return 0;
}

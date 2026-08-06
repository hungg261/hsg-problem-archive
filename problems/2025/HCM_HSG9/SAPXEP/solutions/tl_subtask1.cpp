#include <bits/stdc++.h>
using namespace std;

long long bubbleSort(vector<int>& arr) {
    int n = arr.size();
    long long ans = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                ++ans;
            }
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    cout << bubbleSort(arr) << '\n';
    return 0;
}

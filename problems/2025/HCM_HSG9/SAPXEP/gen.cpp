#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    
    int min_n = opt<int>("min_n", 1),
        max_n = opt<int>("max_n", 200'000);

    int max_val = opt<int>("max_val", 1'000'000'000);
    int sorted = opt<int>("sorted", 0); // -1 = decreasing; +1 = increasing
    int after_shuffle = opt<int>("extra", 0); // 1 = random swaps after sorted

    int n = rnd.next(min_n, max_n);
    cout << n << "\n";

    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i) a[i] = rnd.next(1, max_val);

    if(sorted == 1) sort(begin(a) + 1, end(a));
    else if(sorted == -1) sort(begin(a) + 1, end(a), greater<int>());

    if(after_shuffle){
        for(int i = rnd.next(1, 50); i > 0; --i){
            int x = rnd.next(1, n), y = rnd.next(1, n);
            swap(a[x], a[y]);
        }
    }

    for(int i = 1; i <= n; ++i){
        cout << a[i];
        if(i < n) cout << " ";
    }

    cout << "\n";
    
    return 0;
}

#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    
    int min_n = opt<int>("min_n"), max_n = opt<int>("max_n");
    int min_q = opt<int>("min_q"), max_q = opt<int>("max_q");
    int min_val = opt<int>("min_val", 1), max_val = opt<int>("max_val", (int)1e9);
    
    int n = rnd.next(min_n, max_n);
    int q = rnd.next(min_q, max_q);

    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i){
        a[i] = rnd.next(min_val, max_val);
    }

    cout << n << " " << q << "\n";
    for(int i = 1; i <= n; ++i){
        cout << a[i];
        if(i < n) cout << " ";
        else cout << "\n";
    }

    for(int i = 1; i <= q; ++i){
        int u = rnd.next(1, n - 1);
        int v = rnd.next(u + 1, n);

        cout << u << " " << v << "\n";
    }

    return 0;
}

#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    
    int min_n = opt<int>("min_n"), max_n = opt<int>("max_n");
    int _gcd = opt<int>("gcd", -1); // -x = random gcd to x
    int min_val = opt<int>("min_val", 1), max_val = opt<int>("max_val", (int)1e9);

    int n = rnd.next(min_n, max_n);
    cout << n << "\n";

    if(_gcd < 0){
        _gcd = rnd.next(2, -_gcd);
    }

    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i){
        a[i] = rnd.next(min_val, max_val);
        a[i] = (a[i] + _gcd - 1) / _gcd * _gcd;

        if(a[i] < min_val) a[i] = min_val;
        if(a[i] > max_val) a[i] = max_val;
    }

    a[rnd.next(1, n)] = rnd.next(min_val, max_val);

    for(int i = 1; i <= n; ++i){
        cout << a[i];
        if(i < n) cout << " ";
    }

    cout << "\n";
    
    return 0;
}

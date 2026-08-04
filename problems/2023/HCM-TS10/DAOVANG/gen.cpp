#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    
    int n = rnd.next(opt<int>("min_n", 1), opt<int>("max_n", 50'000));
    int k = rnd.next(opt<int>("min_k", 2), opt<int>("max_k", 20));
    int min_x = opt<int>("min_x", 0), max_x = opt<int>("max_x", (int)1e9);

    println(n, k);
    for(int i = 1; i <= n; ++i){
        println(rnd.next(min_x, max_x));
    }
    
    return 0;
}

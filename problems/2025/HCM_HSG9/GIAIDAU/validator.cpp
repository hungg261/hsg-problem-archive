#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    
    int n = inf.readInt(2, 100'000, "~n");
    inf.readSpace();
    int q = inf.readInt(1, 100'000, "~q");
    inf.readEoln();

    for(int i = 1; i <= n; ++i){
        inf.readInt(1, (int)1e9, format("~a[%d]", i));
        if(i < n) inf.readSpace();
        else inf.readEoln();
    }

    for(int i = 1; i <= q; ++i){
        int u = inf.readInt(1, n, format("~u[%d]", i));
        inf.readSpace();
        int v = inf.readInt(1, n, format("~v[%d]", i));
        ensuref(u < v, "Query %d doesn\'t satisfy u < v (u=%d, v=%d)", i, u, v);
        
        inf.readEoln();
    }

    inf.readEof();
    
    return 0;
}

#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    
    const int MAXN = 1e5;
    const int MAXVAL = 1e9;

    int n = inf.readInt(2, MAXN, "~n");
    inf.readEoln();

    for(int i = 1; i <= n; ++i){
        inf.readInt(1, MAXVAL, format("~a[%d]", i));
        if(i < n) inf.readSpace();
    }

    inf.readEoln();
    inf.readEof();
    
    return 0;
}

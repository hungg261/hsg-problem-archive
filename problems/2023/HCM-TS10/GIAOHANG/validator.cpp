#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    
    int n = inf.readInt(1, (int)3e5, "n");
    inf.readSpace();
    int m = inf.readInt(1, (int)1e9, "m~");
    inf.readEoln();
    
    for(int i = 1; i <= n; ++i){
        inf.readInt(0, m, format("u[%d]~", i));
        inf.readSpace();
        inf.readInt(0, m, format("v[%d]~", i));
        inf.readEoln();
    }

    inf.readEof();
    
    return 0;
}

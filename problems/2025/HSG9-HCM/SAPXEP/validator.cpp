#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    
    int n = inf.readInt(1, 200'000, "n");
    inf.readEoln();

    const int INF = 1e9;
    for(int i = 1; i <= n; ++i){
        inf.readInt(1, INF, format("a[%d]~", i));
        if(i < n) inf.readSpace();
    }

    inf.readEoln();
    inf.readEof();
    
    return 0;
}

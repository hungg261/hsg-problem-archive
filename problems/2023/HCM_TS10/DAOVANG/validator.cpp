#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(1, 50'000, "n~");
    inf.readSpace();
    int k = inf.readInt(1, 20, "k~");
    inf.readEoln();

    for(int i = 1; i <= n; ++i){
        inf.readInt(0, (int)1e9, format("X[%d]~", i));
        inf.readEoln();
    }

    inf.readEof();
    
    return 0;
}

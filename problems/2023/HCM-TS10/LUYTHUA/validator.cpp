#include "testlib.h"
#include <cmath>

using namespace std;

long long calcPower(int p) {
    long long base = p / 10;
    long long exp = p % 10;
    long long res = 1;
    for (int i = 0; i < exp; ++i) {
        res *= base;
    }
    return res;
}

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    
    int n = inf.readInt(1, 20, "n");
    inf.readEoln();

    long long total_sum = 0;

    for (int i = 1; i <= n; ++i) {
        int p = inf.readInt(10, 9999, format("P[%d]~", i));
        inf.readEoln();

        total_sum += calcPower(p);
    }

    inf.readEof();

    ensuref(0 < total_sum && total_sum < 1000000000LL, "Sum >= 10^9 (Total sum = %lld)", total_sum);

    return 0;
}
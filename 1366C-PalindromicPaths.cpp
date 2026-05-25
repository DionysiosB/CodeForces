#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long nr, nc; scanf("%ld %ld", &nr, &nc);
        std::vector<long> sv(nr + nc - 1), zv(nr + nc - 1);
        for(long row = 0; row < nr; row++){
            for(long col = 0; col < nc; col++){
                int x; scanf("%d", &x);
                sv[row + col] += x;
                zv[row + col] += 1 - x;
            }
        }

        long total(0);
        for(long p = 0; 2 * (p + 1) < nr + nc; p++){
            long ones = sv[p] + sv[nr + nc - 2 - p];
            long zeros = zv[p] + zv[nr + nc - 2 - p];
            total += (ones < zeros) ? ones : zeros;
        }

        printf("%ld\n", total);
    }

    return 0;
}

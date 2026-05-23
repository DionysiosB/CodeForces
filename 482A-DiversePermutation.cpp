#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> perm(n);
    for(int p = 0; p < k; p++){
        if(p % 2){perm[p] = n - (p - 1) / 2;}
        else{perm[p] = p / 2 + 1;}
    }

    int step = (k % 2) ? 1 : -1;
    for(int p = k; p < n; p++){
        perm[p] = perm[p - 1] + step;
    }

    for(int p = 0; p < n; p++){printf("%ld ", perm[p]);}
    puts("");

    return 0;
}

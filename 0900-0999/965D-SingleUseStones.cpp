#include <cstdio>
#include <vector>

int main(){

    long w, l; scanf("%ld %ld", &w, &l);
    std::vector<long> a(w + 1, 2e9); for(long p = 1; p < w; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(w + 1, 0);

    for(long p = 1; p <= w; p++){
        if(a[p] <= 0){continue;}
        if(p <= l){b[p] = a[p]; continue;}
        for(long u = p - l; u < p; u++){
            long mv = (b[u] < (a[p] - b[p])) ? b[u] : (a[p] - b[p]);
            b[u] -= mv; b[p] += mv;
            if(b[p] >= a[p]){break;}
        }
    }

    printf("%ld\n", b.back());

    return 0;
}

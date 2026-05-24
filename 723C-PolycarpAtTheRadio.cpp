#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n, 0), b(m + 1, 0);

    for(long p = 0; p < n; p++){
        scanf("%ld", &a[p]);
        if(a[p] <= m){++b[a[p]];}
    }


    long chg(0), min(n / m);
    for(long p = 1; p <= m; p++){
        while(b[p] < min){
            for(long q = 0; q < n && b[p] < min; q++){
                if(a[q] > m){a[q] = p; ++b[p]; ++chg;}
                else if(b[a[q]] > n/m){--b[a[q]]; a[q] = p; ++b[p]; ++chg;}
            }
        }
    }

    printf("%ld %ld\n", min, chg);
    for(int p = 0; p < n; p++){printf("%ld ", a[p]);}
    puts("");

    return 0;
}

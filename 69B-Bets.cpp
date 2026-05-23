#include <cstdio>
#include <vector>

struct athlete{long l, r, t, c;};

int main(){

    const long MAX = 1e9;
    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<athlete> v(m);
    for(long p = 0; p < m; p++){scanf("%ld %ld %ld %ld", &v[p].l, &v[p].r, &v[p].t, &v[p].c);}

    long total(0);
    for(long seg = 1; seg <= n; seg++){
        long bestTime(MAX), profit(0);
        for(long p = 0; p < m; p++){
            if(seg < v[p].l || v[p].r < seg){continue;}
            if(v[p].t < bestTime){bestTime = v[p].t; profit = v[p].c;}
        }

        total += profit;
    }

    printf("%ld\n", total);

    return 0;
}

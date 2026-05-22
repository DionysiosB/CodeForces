#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(1, 0);
    long prev(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        if(x == prev){continue;}
        a.push_back(x);
        prev = x;
    }
    a.push_back(0);

    std::vector<long> save(k + 1, 0);
    for(long p = 0; p < a.size(); p++){save[a[p]] += (1 + (a[p - 1] == a[p + 1]));}

    long maxSave(-1), ans(-1);
    for(long p = 1; p <= k; p++){
        if(save[p] <= maxSave){continue;}
        maxSave = save[p]; ans = p;
    }

    printf("%ld\n", ans);

    return 0;
}

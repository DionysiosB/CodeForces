#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    long cnt(0);
    std::vector<long> a(n + 1, 0);
    for(long p = 0; p < m; p++){
        long x; scanf("%ld", &x);
        if(a[x] == 0){++cnt;}
        ++a[x];
        if(cnt == n){
            cnt = 0;
            for(long u = 1; u <= n; u++){--a[u]; cnt += (a[u] > 0);}
            printf("1");
        }
        else{printf("0");}
    }
    puts("");

    return 0;
}

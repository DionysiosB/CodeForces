#include <cstdio>
#include <vector>

int main(){
    
    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n + 1, 0), f(n + 1, 0);
    for(long p = 1; p <= n; p++){
        scanf("%ld", &a[p]);
        f[p] = (a[p - 1] == a[p]) ? f[p - 1] : p;
    }
    
    while(m--){
        long l, r, x; scanf("%ld %ld %ld", &l, &r, &x);
        if(a[r] != x){printf("%ld\n", r);}
        else if(f[r] > l){printf("%ld\n", f[r] - 1);}
        else{puts("-1");}
    }
    
    return 0;
}

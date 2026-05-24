#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(m, 0), b(m, 0), c(n, 0);
    for(long row = 0; row < n; row++){
        c[row] = row;
        for(long col = 0; col < m; col++){
            long x; scanf("%ld", &x);
            if(x < a[col]){b[col] = row;}
            a[col] = x;
            if(b[col] < c[row]){c[row] = b[col];}
        }
    }

    long k; scanf("%ld", &k);
    while(k--){
        long l, r; scanf("%ld %ld", &l, &r);
        --l; --r;
        puts((c[r] <= l) ? "Yes" : "No");
    }

    return 0;
}

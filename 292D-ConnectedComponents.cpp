#include<cstdio>
#include<vector>

struct dsu{
    std::vector<long> f; long count;
    dsu(long n){f.resize(n, 0); count = n;}
    long find(long x){return f[x] ? f[x] = find(f[x]) : x;}
    void join(long x,long y){
        x = find(x); y = find(y); 
        if(x != y){f[x] = y; count--;}
    }
};


int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> s(m + 1, 0), t(m + 1, 0);
    for (long p=1; p<=m; p++){scanf("%ld %ld", &s[p], &t[p]);}

    std::vector<dsu> left(m + 2, dsu(n + 1)), right(m + 2, dsu(n + 1));
    for (long p = 1; p <= m; p++){left[p] = left[p - 1]; left[p].join(s[p], t[p]);}
    for (long p = m; p >= 1; p--){right[p] = right[p + 1]; right[p].join(s[p], t[p]);}

    long k; scanf("%ld", &k);
    while(k--){
        long l, r; scanf("%ld %ld", &l, &r); 
        dsu u = left[l - 1];
        for(long p = 1; p <= n; p++){if(right[r + 1].f[p]){u.join(p, right[r+1].f[p]);}}
        printf("%ld\n", u.count - 1);   //because the nodes are numbered 1 through n, and create a struct of size (n + 1);
    }

    return 0;
}

#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    while(m--){
        long l, r, x; scanf("%ld %ld %ld", &l, &r, &x);
        std::vector<long> b = a;
        sort(b.begin() + l - 1, b.begin() + r);
        puts((b[x - 1] == a[x - 1]) ? "Yes" : "No");
    }

    return 0;
}

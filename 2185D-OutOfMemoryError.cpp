#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, h; scanf("%ld %ld %ld", &n, &m, &h);
        std::vector<long> a(n), v(n), w(n, -1);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

        long reset(0);
        for(long p = 1; p <= m; p++){
            long b, c; scanf("%ld %ld", &b, &c);
            --b;
            if(reset >= w[b]){v[b] = a[b];}
            w[b] = p; v[b] += c;
            if(v[b] > h){v[b] = a[b]; reset = p;}
        }

        for(long p = 0; p < n; p++){printf("%ld ", (w[p] > reset) ? v[p] : a[p]);}
        puts("");
    }

}

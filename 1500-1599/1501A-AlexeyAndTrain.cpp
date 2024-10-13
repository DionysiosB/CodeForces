#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n), b(n); for(long p = 0; p < n; p++){scanf("%ld %ld", &a[p], &b[p]);}
        std::vector<long> d(n); for(long p = 0; p < n; p++){scanf("%ld", &d[p]);}

        long t(0), depart(0);
        for(long p = 0; p < n; p++){
            t = depart + (a[p] - (p ? b[p - 1] : 0) + d[p]);
            depart = t + (b[p] - a[p] + 1) / 2;
            depart = (depart > b[p]) ? depart : b[p];
        }

        printf("%ld\n", t);
    }

}

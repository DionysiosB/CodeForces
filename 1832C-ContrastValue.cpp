#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a;
        long prev(-1);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == prev){continue;}
            a.push_back(x); prev = x;
        }

        long cnt(0);
        for(long p = 1; p + 1 < a.size(); p++){
            cnt += ((a[p - 1] < a[p] && a[p] > a[p + 1]) || (a[p - 1] > a[p] && a[p] < a[p + 1]));
        }

        printf("%ld\n", cnt + 1 + (a.size() > 1));
    }

}

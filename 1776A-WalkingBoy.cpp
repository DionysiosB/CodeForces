#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long prev(0), cnt(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            cnt += (a - prev) / 120;
            prev = a;
        }

        cnt += (1440 - prev) / 120;

        puts(cnt >= 2 ? "YES" : "NO");
    }

}

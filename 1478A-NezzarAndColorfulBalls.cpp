#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0), mx(0);
        long prev(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x != prev){cnt = 0;}
            ++cnt;
            mx = (mx > cnt) ? mx : cnt;
            prev = x;
        }

        printf("%ld\n", mx);
    }

}

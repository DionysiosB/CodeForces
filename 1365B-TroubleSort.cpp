#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool sorted(true); long prev(0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); if(p > 0 && x < prev){sorted = false;}; prev = x;}
        bool a(0), z(0);
        for(long p = 0; p < n; p++){int x; scanf("%d", &x); a |= (x == 1); z |= (x == 0);}
        bool res = sorted || (a && z);
        puts(res ? "Yes" : "No");
    }

    return 0;
}

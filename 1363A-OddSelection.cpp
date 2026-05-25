#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        long odd(0); for(long p = 0; p < n; p++){long a; scanf("%ld", &a); odd += (a % 2);}
        bool ans = (odd >= 1) && (!(x == n && odd % 2 == 0)) && (!(odd == n && x % 2 == 0));
        puts(ans ? "Yes" : "No");
    }

    return 0;
}

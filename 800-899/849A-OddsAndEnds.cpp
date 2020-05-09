#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    bool possible(n & 1);
    for(long p = 0; p < n; p++){
        long a; scanf("%ld", &a);
        if((p == 0) && !(a & 1)){possible = false; break;}
        if((p == n - 1) && !(a & 1)){possible = false; break;}
    }

    puts(possible ? "Yes" : "No");

    return 0;
}

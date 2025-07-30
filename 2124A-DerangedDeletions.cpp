#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

        long x(-1), y(-1);
        for(long p = 0; x < 0 && p < n; p++){
            for(long q = p + 1; x < 0 && q < n; q++){
                if(a[p] > a[q]){x = a[p]; y = a[q];}
            }
        }

        if(x < 0){puts("NO");}
        else{printf("YES\n2\n%ld %ld\n", x, y);}
    }
}


#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        for(long p = 0; p < n / 2; p++){
            if( (p % 2 == 0) == (v[p] < v[n - 1 - p])){printf("LR");}
            else{printf("RL");}
        }

        puts(n % 2 ? "L" : "");
    }
}

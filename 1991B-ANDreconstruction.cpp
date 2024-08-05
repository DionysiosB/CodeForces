#include <cstdio>
#include <vector>


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n), b(n + 1, 0);
        for(long p = 1; p < n; p++){scanf("%ld", &b[p]);}
        for(long p = 0; p < n; p++){a[p] = b[p] | b[p + 1];}
        bool possible(true);
        for(long p = 1; possible && p < n; p++){
            if((a[p - 1] & a[p]) != b[p]){possible = false;}
        }

        if(!possible){puts("-1"); continue;}
        for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
        puts("");
    }

}

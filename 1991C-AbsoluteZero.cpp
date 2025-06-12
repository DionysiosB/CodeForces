#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n);

        bool odd(false), even(false);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            if(a[p] % 2){odd = true;}
            else{even = true;}
        }

        if(odd && even){puts("-1"); continue;}

        printf("%d\n", 30 + even);
        for(long p = 29; p >= 0; p--){printf("%ld ", (1L << p));}
        if(even){printf(" 1");}
        puts("");
    }

}

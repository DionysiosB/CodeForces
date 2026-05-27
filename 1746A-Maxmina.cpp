#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        bool one(false);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            if(x == 1){one = true;}
        }

        puts(one ? "YES" : "NO");
    }

}

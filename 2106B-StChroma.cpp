#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        for(size_t p = 0; p < n; p++){if(p != x){printf("%ld ", p);}}
        if(x < n){printf("%ld", x);}
        puts("");
    }

}

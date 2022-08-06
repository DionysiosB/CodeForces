#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        long v[4] = {0};
        for(long p = 1; p < 4; p++){scanf("%ld", v + p);}
        puts(((v[x] != 0) && (v[v[x]] != 0)) ? "YES" : "NO");
    }

}

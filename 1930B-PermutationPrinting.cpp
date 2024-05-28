#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long left(1), right(n);
        for(long p = 0; p < n; p++){printf("%ld ", (p % 2) ? (right--) : (left++));}
        puts("");
    }

}

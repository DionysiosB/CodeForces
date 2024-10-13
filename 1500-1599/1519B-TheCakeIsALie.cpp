#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
        bool res = (n * m - 1 == k);
        puts(res ? "YES" : "NO");
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
        long res = (n < k ? n : k) * (m < k ? m : k);
        printf("%ld\n", res);
    }

}

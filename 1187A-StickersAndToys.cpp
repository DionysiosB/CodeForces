#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, s, t; scanf("%ld %ld %ld", &n, &s, &t);
        printf("%ld\n", 1 + n - (s < t ? s : t));
    }

    return 0;
}

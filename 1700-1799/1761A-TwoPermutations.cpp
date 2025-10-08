#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
        bool res = (a == n && b == n) || (a + b + 1 < n);
        puts(res ? "Yes" : "No");
    }

}

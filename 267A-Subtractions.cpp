#include <cstdio>

int main(){

    int n; scanf("%d", &n);
    while(n--){
        long a(0), b(0); scanf("%ld %ld", &a, &b);
        long total(0);
        while(a > 0 && b > 0){
            if(a > b){total += a/b; a -= (a/b) * b;}
            else{total += b/a; b -= (b/a) * a;}
        }
        printf("%ld\n", total);
    }
    return 0;
}

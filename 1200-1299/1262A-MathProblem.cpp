#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long mn(1e9 + 7), mx(-1);
        long n; scanf("%ld", &n);
        while(n--){
            long left, right; scanf("%ld %ld", &left, &right);
            mn = (mn < right) ? mn : right;
            mx = (mx > left) ? mx : left;
        }

        printf("%ld\n", (mn < mx) ? (mx - mn) : 0);
    }

    return 0;
}

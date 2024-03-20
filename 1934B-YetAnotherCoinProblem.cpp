#include <cstdio>
#include <vector>

long f(long n){
    if(n < 0){return 1e9;}

    long cnt(0);
    cnt += (n / 15); n %= 15;
    cnt += (n / 6);  n %= 6;
    cnt += (n / 3);  n %= 3;
    cnt += n;
    return cnt;
}



int main(){

    long t; scanf("%ld", &t);

    while(t--){
        long n; scanf("%ld", &n);
        long zero_tens = f(n);
        long one_tens  = 1 + f(n - 10);
        long two_tens  = 2 + f(n - 20);
        long ans = (zero_tens < one_tens ? zero_tens : one_tens);
        ans = (ans < two_tens ? ans : two_tens);
        printf("%ld\n", ans);
    }

}

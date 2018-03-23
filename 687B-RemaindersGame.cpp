#include <cstdio>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){
    long n, k; scanf("%ld %ld", &n, &k);
    long acc(1);

    while(n--){
        long ck; scanf("%ld", &ck);
        ck = gcd(ck,k);
        acc = acc / gcd(acc,ck) * ck;
    }

    puts((acc == k) ? "Yes" : "No");
}

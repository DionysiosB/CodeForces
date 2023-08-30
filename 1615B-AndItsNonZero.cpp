#include <cstdio>

long f(long num, long idx){
    long pow = 1 << idx;
    long a = num / (2 * pow);
    long b = num % (2 * pow);
    long c = (b - pow + 1);
    return a * pow + (c > 0 ? c : 0);
}


int main(){

    const long B = 30;
    long t; scanf("%ld", &t);
    while(t--){
        long left, right; scanf("%ld %ld", &left, &right);

        long cnt(0);
        for(long p = 0; p < B; p++){
            long tmp = f(right, p) - f(left - 1, p);
            cnt = (cnt > tmp) ? cnt : tmp;
        }

        printf("%ld\n", (right - left + 1) - cnt);
    }

}

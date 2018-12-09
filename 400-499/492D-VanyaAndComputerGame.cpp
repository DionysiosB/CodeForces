#include <cstdio>

int main(){

    long long n, x, y; scanf("%lld %lld %lld\n", &n, &x, &y);
    while(n--){
        long long hits; scanf("%lld\n", &hits);
        const long long hx = (hits + 1) * x / (x + y) - hits * x / (x + y); 
        const long long hy = (hits + 1) * y / (x + y) - hits * y / (x + y); 
        puts((hx == hy) ? "Both" : (hx > 0 ? "Vanya" : "Vova"));
    }

    return 0;
}

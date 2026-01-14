#include <cstdio>
 
int main() {
    
    long t; scanf("%ld", &t);
    while(t--){
        long s, k, m; scanf("%ld %ld %ld", &s, &k, &m);
        if(s <= k){
            long ans = s - (m % k);
            printf("%ld\n", ans > 0 ? ans : 0);
        }
        else{printf("%ld\n", ((m % (2 * k) < k) ? s : k) - m % k);}
    }
}

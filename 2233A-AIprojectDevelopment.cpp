#include <cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long n, x, y, z; scanf("%ld %ld %ld %ld", &n, &x, &y, &z);
        long ans = (n + x + y - 1) / (x + y); 
        long ta = z + (n - z*x + x + 10 * y - 1) / (x + 10 * y);
        ans = (ans < ta ? ans : ta);
        printf("%ld\n", ans);
    }

}

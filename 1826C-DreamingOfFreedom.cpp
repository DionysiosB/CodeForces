#include <cstdio>
 
int main(){
    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        if(n == 1){puts("YES");}
        else if(m >= n){puts("NO");}
        else{
            bool out(false);
            for(long p = 2; !out && p <= m && p * p <= n; p++){out |= (n % p == 0);}
            puts(out ? "NO" : "YES");
        }
    }
}

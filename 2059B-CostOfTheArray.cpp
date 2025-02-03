#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        k /= 2;
        
        long res(k + 1);

        if(n == 2 * k){
            for(int p = 1; p < n; p += 2){
                if(a[p] == (p + 1) / 2){continue;}
                res = (p + 1) / 2;
                break;
            }
        }
        else{
            res = 2;
            for(int p = 1; p <= n - 2 * k + 1; p++){
                if(a[p] != 1){res = 1; break;}
            }
        }

        printf("%ld\n", res);
    }

}

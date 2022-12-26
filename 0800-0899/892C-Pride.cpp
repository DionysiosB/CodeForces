#include <cstdio>
#include <vector>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    long ones(0), gt(0);
    for(long p = 0; p < n; p++){
        scanf("%ld",&a[p]);
        ones += (a[p] == 1);
        gt = gcd(gt, a[p]);
    }

    long res(2 * n);
    if(ones){printf("%ld\n", n - ones);}
    else if(gt > 1){puts("-1");}
    else{
        for(long p = 0; p < n; p++){
            long g = a[p];
            for(long q = p + 1; q < n; q++){
                g = gcd(g, a[q]);
                if(g == 1){
                    long cand = (q - p) + (n - 1);
                    res = (res < cand) ? res : cand;
                    break;
                }
            }
        }

        printf("%ld\n", res);
    }

    return 0;
}

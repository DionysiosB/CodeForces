#include <cstdio>

int main(){

    long n(0), k(0), l(0), r(0), sk(0), sall(0);
    scanf("%ld %ld %ld %ld %ld %ld", &n, &k, &l, &r, &sall, &sk);

    long kMean = sk / k; long kMod = sk % k;
    for(int p = 0; p < kMod; p++){printf("%ld ", kMean + 1);}
    for(int p = kMod; p < k; p++){printf("%ld ", kMean);}
    
    if(k < n){
        long restMean = (sall - sk) / (n - k);
        long restMod = (sall - sk) % (n - k);
        for(int p = 0; p < restMod; p++){printf("%ld ", restMean + 1);}
        for(int p = restMod; p < n - k; p++){printf("%ld ", restMean);}
    }

    printf("\n");
    return 0;
}

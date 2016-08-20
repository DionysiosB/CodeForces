#include <cstdio>
#include <vector>

int main(){

    long long h, n; scanf("%lld %lld\n", &h, &n);
    --n;
    std::vector<int> bits(h, 0);
    for(long long p = 0; p < h; p++){bits[p] = n % 2; n /= 2;}

    long long ans(0); bool k(0);
    for(int p = h - 1; p >= 0; p--){
        if(bits[p] != k){ans += (1LL << (p + 1));}
        else{++ans; k = 1 - k;}
    }

    printf("%lld\n", ans);

    return 0;
}

#include <cstdio>

long long countSymmetric(long long x){

    if(x < 10){return x;}
    long long output = x / 10 + 9;   //one every ten numbers, plus the single digit ones;
    long long msd(x), lsd(x % 10);  //msd: Most significant digit;lsd: least significant digit
    while(msd >= 10){msd /= 10;}
    if(msd > lsd){--output;}
    return output;
}

int main(){

    long long l, r; scanf("%lld %lld\n", &l, &r);
    printf("%lld\n", countSymmetric(r) - countSymmetric(l - 1));
    return 0;
}

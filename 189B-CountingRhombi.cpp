#include <cstdio>

int main(){

    long long w, h; scanf("%lld %lld\n", &w, &h);
    printf("%lld\n", (w/2) * ((w + 1)/2) * (h/2) * ((h + 1)/2));
    return 0;
}

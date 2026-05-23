#include <cstdio>

int main(){
    long n; scanf("%ld\n", &n);
    const int scale = 10;
    long long count[2 * scale + 1] = {0};

    int temp;
    while(n--){scanf("%d",&temp);count[scale + temp]++;}

    long long total(0);
    for(int k = 0; k < scale; k++){total += count[k] * count[2 * scale - k];} 
    total += count[scale] * (count[scale] - 1) / 2;
    printf("%lld\n", total);

    return 0;
}

#include <cstdio>

int main(){

    int n, k; scanf("%d %d", &n, &k);
    int t = 240 - k;
    int count(0);
    while(t >= 5 * (count + 1)){++count; t -= 5 * count;}
    count = (n < count) ? n : count;
    printf("%d\n", count);

    return 0;
}

#include <cstdio>

int main(){

    int n; scanf("%d\n", &n);
    long count(0);
    while(n--){
        int x1, y1, x2, y2; scanf("%d %d %d %d\n", &x1, &y1, &x2, &y2);
        count += (x2 - x1 + 1) * (y2 - y1 + 1);
    }

    printf("%ld\n", count);

    return 0;
}

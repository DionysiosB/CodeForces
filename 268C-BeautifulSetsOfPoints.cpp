#include <cstdio>

int main(){

    int n(0), m(0); scanf("%d %d", &n, &m);
    int corner = (m < n) ? m : n;
    printf("%d\n",corner + 1);
    for(int k = corner; k >= 0; k--){printf("%d %d\n", corner - k, k);}
    return 0;
}

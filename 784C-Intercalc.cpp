#include<cstdio>

int main(){

    int n; scanf("%d", &n);
    int max(0), x(0);
    for(int p = 0; p < n; p++){scanf("%d", &x); max = (x > max) ? x : max;}
    printf("%d\n", (max ^ x));

    return 0;
}

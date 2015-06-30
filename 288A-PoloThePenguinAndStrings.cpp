#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);

    if((n < k) || (k == 1 & n > 1)){puts("-1"); return 0;}
    else if(n == 1 && k == 1){puts("a"); return 0;}

    for(long p = 0; p < n - (k - 2); p++){printf("%c", (p % 2) ? 'b' : 'a');}
    for(int p = 2; p < k; p++){printf("%c", 'a' + p);}
    puts("");

    return 0;
}

#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<bool> a(n + 2, 1);
    a[0] = a[1] = 0; 
    for(long p = 2; p * p <= n + 1; p++){
        if(!a[p]){continue;}
        for(long q = 2 * p; q < a.size(); q += p){a[q] = 0;}
    }

    puts((n <= 2) ? "1" : "2");
    for(long p = 2; p <= n + 1; p++){printf("%d ", a[p] ? 1 : 2);}
    puts("");

    return 0;
}

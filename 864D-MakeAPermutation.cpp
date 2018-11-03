#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n, 0), b(n + 1, 0);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]); ++b[a[p]];}
    std::vector<bool> found(n + 1, 0);
    long ind(1), count(0);
    while(b[ind] > 0){++ind;}
    for(long p = 0; p < n; p++){
        long u = a[p];
        if((b[u] <= 1) || ((ind > u) && (!found[u]))){found[u] = true;}
        else{
            ++count;
            --b[u]; b[ind] = 1; found[ind] = 1; a[p] = ind;
            while(b[ind] > 0){++ind;}
        }
    }

    printf("%ld\n", count);
    for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
    puts("");

    return 0;
}

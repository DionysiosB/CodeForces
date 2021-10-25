#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<bool> v(m + 1, 1);

    long rem(m); 
    while(n--){
        long l, r; scanf("%ld %ld", &l, &r);
        for(long p = l; p <= r; p++){rem -= v[p]; v[p] = 0;}
    }

    printf("%ld\n", rem);
    for(long p = 1; p <= m; p++){if(v[p]){printf("%ld ", p);}}
    puts("");

    return 0;
}

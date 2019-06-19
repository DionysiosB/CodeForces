#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> c(n); for(long p = 0; p < n; p++){scanf("%ld", &c[p]);}
    std::vector<long> a(m); for(long p = 0; p < m; p++){scanf("%ld", &a[p]);}

    long ind(0);
    for(long p = 0; p < n && ind < m; p++){if(c[p] <= a[ind]){++ind;}}
    printf("%ld\n", ind);

    return 0;
}

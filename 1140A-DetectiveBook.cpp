#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}

    long page(1), mx(0), cnt(0);
    while(page <= n){
        ++cnt;
        do{mx = (mx > a[page]) ? mx : a[page]; ++page;}while(page <= mx);
    }

    printf("%ld\n", cnt);

    return 0;
}

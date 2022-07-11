#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<int> a(n); for(long p = 0; p < n; p++){scanf("%d", &a[p]);}
    long cnt(0), mx(0);
    for(long p = 0; p < 2 * n; p++){
        if(a[p % n]){++cnt; mx = (mx > cnt) ? mx : cnt;}
        else{cnt = 0;}
    }
    printf("%ld\n", mx);

    return 0;
}

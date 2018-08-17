#include <cstdio>
#include <vector>

int main(){

    const long N = 1e6 + 7; 
    long n, a; scanf("%ld %ld", &n, &a);
    std::vector<long> cnt(N);
    long b(0);
    while(n--){
        long col; scanf("%ld", &col);
        if(cnt[col] >= cnt[a]){++cnt[col];}
        if(cnt[b] < cnt[a]){break;}
        b = (cnt[b] >= cnt[col]) ? b : col;
    }

    printf("%ld\n", (cnt[b] >= cnt[a]) ? b : (-1));

    return 0;
}

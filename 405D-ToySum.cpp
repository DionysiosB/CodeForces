#include <cstdio>
#include <vector>

int main(){

    const int s = 1e6;
    std::vector<bool> used(s + 1, 0);

    long n; scanf("%ld\n", &n); printf("%ld\n", n);
    long paired(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x); used[x] = 1;
        if(used[s + 1 - x]){++paired;}
    }

    for(long p = 1; p <= s; p++){
        if(used[p] && !used[s + 1 - p]){printf("%ld ", s + 1 - p);}
        if(paired > 0 && !used[p] && !used[s + 1 - p]){--paired; printf("%ld %ld ", p, s + 1 - p);}
    }

    puts("");

    return 0;
}

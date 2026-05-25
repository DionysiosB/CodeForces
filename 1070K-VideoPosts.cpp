#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n), v(k); long long s(0);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]); s += a[p];}
    if(s % k){puts("No"); return 0;}

    long target = s / k;
    long idx(0);
    bool possible(true);
    for(long p = 0; p < k; p++){
        long cnt(0), dur(0);
        while(idx < n && dur < target){dur += a[idx++]; ++cnt;}
        if(dur != target){possible = false; break;}
        v[p] = cnt;
    }
    
    if(possible){
        puts("Yes");
        for(long p = 0; p < k; p++){printf("%ld ", v[p]);}
        puts("");
    }
    else{puts("No");}

    return 0;
}

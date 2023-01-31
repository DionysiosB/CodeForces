#include <cstdio>
#include <vector>

void f(long start, long end, long curDepth, const std::vector<long> &dv, std::vector<long> &depth){

    if(start >= end){return;}
    long idx(start);
    for(long p = start + 1; p < end; p++){
        if(dv[p] > dv[idx]){idx = p;}
    }

    depth[idx] = curDepth;
    f(start, idx, curDepth + 1, dv, depth);
    f(idx + 1, end, curDepth + 1, dv, depth);
}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> t(n, 0);
        f(0, n, 0, a, t);
        for(long p = 0; p < n; p++){printf("%ld ", t[p]);}
        puts("");
    }

}

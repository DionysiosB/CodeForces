#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::pair<long, long> > a(n), b(n);
        for(long p = 0; p < n; p++){scanf("%ld %ld", &a[p].first, &a[p].second); b[p] = a[p];}
        sort(b.begin(), b.end());
        long x(-1);
        for(long p = 1; p < n; p++){if(b[p - 1].second < b[p].first){x = b[p].first; break;}}
        if(x < 0){puts("-1");}
        else{for(long p = 0; p < n; p++){printf("%d ", 1 + (a[p].first >= x));}; puts("");}
    }

    return 0;
}

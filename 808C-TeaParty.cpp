#include <cstdio>
#include <vector>
#include <algorithm>

struct cup{long rank, cap, fill;};
bool rankCompare(cup a, cup b){return a.rank < b.rank;}
bool capCompare(cup a, cup b){return a.cap < b.cap;}

int main(){

    long n, w; scanf("%ld %ld", &n, &w);
    long totalNeeded(0), totalCap(0);
    std::vector<cup> a(n);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        a[p].rank = p; 
        a[p].cap = x;
        totalNeeded += (x + 1) / 2;
        totalCap += x;
    }

    if((w < totalNeeded) || (totalCap < w)){puts("-1"); return 0;}
    for(long p = 0; p < n; p++){a[p].fill = (a[p].cap + 1) / 2; w -= a[p].fill;}
    sort(a.rbegin(), a.rend(), capCompare);

    for(long p = 0; p < n; p++){
        if(w <= 0){break;}
        long diff = a[p].cap - a[p].fill;
        diff = (diff < w) ? diff : w;
        a[p].fill += diff;
        w -= diff;
    }

    sort(a.begin(), a.end(), rankCompare);
    for(long p = 0; p < n; p++){printf("%ld ", a[p].fill);}
    puts("");

    return 0;
}

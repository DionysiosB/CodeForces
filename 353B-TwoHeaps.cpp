#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>

struct obj{long pos, val, grp;};
bool compVal(obj a, obj b){return a.val < b.val;}
bool compPos(obj a, obj b){return a.pos < b.pos;}

int main(){

    long n; scanf("%ld", &n);
    std::vector<obj> v(2 * n);
    for(long p = 0; p < 2 * n; p++){long x; scanf("%ld", &x); v[p].pos = p; v[p].val = x; v[p].grp = -1;}
    sort(v.begin(), v.end(), compVal);

    std::set<long> s, sA, sB;
    long first(0), second(0);
    for(long p = 0; p < 2 * n; p++){
        long x = v[p].val;
        if(sA.count(x) && sB.count(x)){continue;}
        else if(sA.count(x)){sB.insert(x); v[p].grp = 2; ++second;}
        else if(sB.count(x)){sA.insert(x); v[p].grp = 1; ++first;}
        else if(sA.size() > sB.size()){sB.insert(x); v[p].grp = 2; ++second;}
        else if(sB.size() >= sA.size()){sA.insert(x); v[p].grp = 1; ++first;}
    }

    for(long p = 0; p < 2 * n; p++){
        if(v[p].grp > 0){continue;}
        if(first < n){v[p].grp = 1; ++first;}
        else{v[p].grp = 2; ++second;}
    }

    printf("%ld\n", sA.size() * sB.size());
    sort(v.begin(), v.end(), compPos);
    for(long p = 0; p < 2 * n; p++){printf("%ld ", v[p].grp);}
    puts("");

    return 0;
}

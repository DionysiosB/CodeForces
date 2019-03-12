#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>

struct act{long w, t, x, r;};

bool tcomp(act A, act B){return A.t < B.t;}

int main(){

    long n; scanf("%ld", &n);
    std::vector<act> a(n);
    for(long p = 0; p < n; p++){
        scanf("%ld %ld %ld", &a[p].w, &a[p].t, &a[p].x);
        a[p].r = p;
    }

    sort(a.begin(), a.end(), tcomp);

    std::map<long, long> m;
    std::vector<std::pair<long, long> > v;
    for(long p = 0; p < n; p++){
        if(a[p].w == 1){++m[a[p].x];}
        else if(a[p].w == 2){--m[a[p].x];}
        else if(a[p].w == 3){v.push_back(std::make_pair(a[p].r, m.count(a[p].x) ? m[a[p].x] : 0));}
    }

    sort(v.begin(), v.end());
    for(long p = 0; p < v.size(); p++){printf("%ld\n", v[p].second);}

    return 0;
}

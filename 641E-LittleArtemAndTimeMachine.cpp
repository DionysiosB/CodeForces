#include <cstdio>
#include <iostream>
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

    std::map<long, std::vector<long> > mp, mn;
    std::vector<std::pair<long, long> > v;
    for(long p = 0; p < n; p++){
        //HELP: Instead of using vectors and sorting each time, we could use a set; But cannot compute the distance between upper_bound and begin for sets, only for vectors...
        if(a[p].w == 1){mp[a[p].x].push_back(a[p].r); sort(mp[a[p].x].begin(), mp[a[p].x].end());}
        else if(a[p].w == 2){mn[a[p].x].push_back(a[p].r); sort(mn[a[p].x].begin(), mn[a[p].x].end());}
        else if(a[p].w == 3){
            long u = a[p].x;
            long pos = std::upper_bound(mp[u].begin(), mp[u].end(), a[p].r) - mp[u].begin();
            long neg = std::upper_bound(mn[u].begin(), mn[u].end(), a[p].r) - mn[u].begin();
            v.push_back(std::make_pair(a[p].r, pos - neg));
        }
    }

    sort(v.begin(), v.end());
    for(long p = 0; p < v.size(); p++){printf("%ld\n", v[p].second);}

    return 0;
}

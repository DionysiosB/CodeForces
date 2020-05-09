#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::pair<long, long> > a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p].first); a[p].second = p;}
    sort(a.begin(), a.end());

    std::vector<bool> used(n, 0);
    std::vector<long> rank(n);
    for(long p = 0; p < n; p++){rank[p] = a[p].second;}

    std::vector<std::vector<long> > s;
    for(long p = 0; p < n; p++){
        if(used[p]){continue;}
        long cur = p;
        std::vector<long> v;
        while(!used[cur]){
            v.push_back(cur);
            used[cur] = 1;
            cur = rank[cur];
        }

        s.push_back(v);
    }

    printf("%ld\n", s.size());
    for(long p = 0; p < s.size(); p++){
        printf("%ld ", s[p].size());
        for(long q = 0; q < s[p].size(); q++){printf("%ld ", 1 + s[p][q]);}
        puts("");
    }

    return 0;
}

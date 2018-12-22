#include<iostream>
#include<vector>
#include<map>
#include<set>

int main(){

    std::map<long, std::set<std::pair<long, long> > > q;
    long n; scanf("%ld", &n);

    for(long p = 0; p < n; p++){
        long x,y; scanf("%ld %ld", &x, &y);
        q[y - x].insert(std::make_pair(x, y));
    }

    std::vector<std::pair<long, long> > num(n);
    for(long p = 0; p < n; p++){
        long w; scanf("%ld", &w);
        if(!q[w].size()){puts("NO"); return 0;}
        num[p] = *q[w].begin();
        q[w].erase(q[w].begin());
    }

    for(long p = 1; p < n; p++){if(num[p - 1].first >= num[p].first && num[p - 1].second >= num[p].second){puts("NO"); return 0;}}

    puts("YES");
    for(long p = 0; p < n; p++){printf("%ld %ld\n", num[p].first, num[p].second);}

    return 0;
}

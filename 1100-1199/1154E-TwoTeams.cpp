#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> team(n, 0), left(n, 0), right(n, 0);
    std::vector<std::pair<long, long> > a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p].first); a[p].second = p;}
    left[0] = -1; for(long p = 1; p < n; p++){left[p] = p - 1;}
    for(long p = 0; p + 1 < n; p++){right[p] = p + 1;}; right[n - 1] = -1; 
    sort(a.rbegin(), a.rend());

    long pick(1);
    for(long p = 0; p < n; p++){
        long pos = a[p].second;
        if(team[pos]){continue;}

        std::vector<long> b;
        long cur(pos);
        for(long p = 0; p < k; p++){
            if(left[cur] < 0){break;}
            b.push_back(left[cur]);
            cur = left[cur];
        }
        long updLeft = left[cur];

        std::vector<long> d;
        cur = pos;
        for(long p = 0; p < k; p++){
            if(right[cur] < 0){break;}
            d.push_back(right[cur]);
            cur = right[cur];
        }

        long updRight = right[cur];

        left[pos] = updLeft; right[pos] = updRight; team[pos] = pick;
        for(long p = 0; p < b.size(); p++){left[b[p]] = updLeft; right[b[p]] = updRight; team[b[p]] = pick;}
        for(long p = 0; p < d.size(); p++){left[d[p]] = updLeft; right[d[p]] = updRight; team[d[p]] = pick;}
        pick = 3 - pick;

        if(updLeft >= 0){right[updLeft] = updRight;}
        if(updRight >= 0){left[updRight] = updLeft;}
    }

    for(long p = 0; p < n; p++){printf("%ld", team[p]);}
    puts("");

    return 0;
}

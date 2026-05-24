#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> left(n + 1, 0), right(n + 1, 0);
    std::set<long> s;
    for(long p = 1; p <= n; p++){
        scanf("%ld %ld", &left[p], &right[p]);
        if(left[p] == 0){s.insert(p);}
    }

    long cur = *s.begin(); s.erase(cur);
    long node = cur;
    while(s.size() > 0){
        while(right[node] > 0){node = right[node];}
        cur = *s.begin(); s.erase(cur); left[cur] = node; right[node] = cur; node = cur;
    }

    for(long p = 1; p <= n; p++){printf("%ld %ld\n", left[p], right[p]);}

    return 0;
}

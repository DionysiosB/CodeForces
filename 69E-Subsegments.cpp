#include <cstdio>
#include <vector>
#include <map>
#include <set>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);

    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    std::map<long, long> cnt;
    std::set<long> maxs;

    for(long p = 0; p < n; p++){
        ++cnt[a[p]]; if(cnt[a[p]] == 1){maxs.insert(a[p]);} else{maxs.erase(a[p]);}
        if(p >= k){--cnt[a[p - k]]; if(cnt[a[p - k]] == 1){maxs.insert(a[p - k]);} else{maxs.erase(a[p - k]);}}
        if(p >= k - 1){
            if(maxs.empty()){puts("Nothing");}
            else{printf("%ld\n", (*(--maxs.end())));}
        }
    }

    return 0;
}

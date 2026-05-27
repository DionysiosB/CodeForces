#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);

        std::vector<long> a(n);
        std::vector<std::pair<long, long> > v(n);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            v[p].first  = a[p] - (n - p);
            v[p].second = p;
        }

        sort(v.rbegin(), v.rend());

        std::vector<bool> jump(n, false);
        for(long p = 0; p < k; p++){jump[v[p].second] = true;}

        long long damage(0);
        for(long p = 0, cnt = 0; p < n; p++){
            if(jump[p]){++cnt;}
            else{damage += (a[p] + cnt);}
        }
        printf("%lld\n", damage);
    }

}

#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<std::pair<long, long> > v(n);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p].first);}
        for(long p = 0; p < n; p++){scanf("%ld", &v[p].second);}
        sort(v.begin(), v.end());
        long ram(k);
        for(long p = 0; p < n; p++){
            if(ram < v[p].first){break;}
            ram += v[p].second;
        }

        printf("%ld\n", ram);
    }

}

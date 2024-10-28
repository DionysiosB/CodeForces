#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::pair<long, std::pair<long, long> > > v(n);
        for(long p = 0; p < n; p++){
            long a, b; scanf("%ld %ld", &a, &b);
            v[p].first = a + b;
            v[p].second.first = a;
            v[p].second.second = b;
        }

        sort(v.begin(), v.end());
        for(long p = 0; p < n; p++){printf("%ld %ld ", v[p].second.first,  v[p].second.second);}
        puts("");
    }

}

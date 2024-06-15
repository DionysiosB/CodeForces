#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::pair<long, long> > v(n + 1);
        for(long p = 1; p <= n; p++){v[p].second = p;}
        for(long p = 0; p < n; p++){
            long a, b; scanf("%ld %ld", &a, &b);
            for(long u = a; u <= b; u++){++v[u].first;}
        }

        sort(v.begin(), v.end());

        std::set<std::pair<long, long> > s;
        s.insert(std::make_pair(1, n));

        for(long p = 1; p <= n; p++){
            long d = v[p].second;
            long left, right;
            for(std::set<std::pair<long, long> >::iterator it = s.begin(); it != s.end(); it++){
                left  = it->first;
                right = it->second;
                if(left <= d && d <= right){
                    s.erase(it);
                    if(d > left){s.insert(std::make_pair(left, d - 1));}
                    if(d < right){s.insert(std::make_pair(d + 1, right));}
                    break;
                }
            }

            printf("%ld %ld %ld\n", left, right, d);
        }
        puts("");

    }

}

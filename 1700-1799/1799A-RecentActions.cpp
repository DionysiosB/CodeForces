#include<cstdio>
#include<vector>
#include<set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> v(n, -1);
        std::set<long> s;
        long idx(n - 1);
        for(long p = 1; p <= m; p++){
            long x; scanf("%ld", &x);
            if(!s.count(x) && idx >= 0){v[idx--] = p;}
            s.insert(x);
        }

        for(long p = 0; p < v.size(); p++){printf("%ld ", v[p]);}
        puts("");
    }

}

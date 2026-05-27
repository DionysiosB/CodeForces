#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> v;
        for(long row = 1; row <= n; row++){
            for(long col = 1; col <= m; col++){
                long da = (row - 1) + (col - 1);
                long db = (row - 1) + (m - col);
                long dc = (n - row) + (col - 1);
                long dd = (n - row) + (m - col);
                long mx = (da > db ? da : db); mx = (mx > dc ? mx : dc); mx = (mx > dd ? mx : dd);
                v.push_back(mx);
            }
        }

        sort(v.begin(), v.end());
        for(long p = 0; p < v.size(); p++){printf("%ld ", v[p]);}
        puts("");
    }

}

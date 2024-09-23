#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, q; scanf("%ld %ld %ld", &n, &m, &q);
        std::vector<long> b(m); for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}
        sort(b.begin(), b.end());
        while(q--){
            long a; scanf("%ld", &a);
            long pos = std::upper_bound(b.begin(), b.end(), a) - b.begin();
            long res(0);
            if(!pos){res = b[0] - 1;}
            else if(pos == m){res = n - b.back();}
            else{res = (b[pos] - b[pos - 1]) / 2;}
            printf("%ld\n", res);
        }
    }

}

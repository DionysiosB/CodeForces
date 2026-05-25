#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> cnt;
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++cnt[x];}

        std::vector<long> pairs, quads;
        for(std::map<long, long>::iterator it = cnt.begin(); it != cnt.end(); it++){
            if(it->second >= 4){quads.push_back(it->first);}
            if(it->second >= 2){pairs.push_back(it->first);}
        }

        if(quads.size() > 0){
            long side = quads[0];
            printf("%ld %ld %ld %ld\n", side, side, side, side);
        }
        else{
            sort(pairs.begin(), pairs.end());
            double minr(1e9); long x, y;
            for(long p = 1; p < pairs.size(); p++){
                long a(pairs[p - 1]), b(pairs[p]);
                double r = (1.0 * a + b) * (1.0 * a + b) / (1.0 * a * b);
                if(r < minr){x = a; y = b; minr = r;}
            }

            printf("%ld %ld %ld %ld\n", x, x, y, y);
        }
    }

    return 0;
}

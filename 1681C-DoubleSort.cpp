#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::pair<long, long> > va(n);
        std::vector<long> wa(n);
        for(long p = 0; p < n; p++){scanf("%ld", &va[p].first); va[p].second = p; wa[p] = va[p].first;}
        sort(va.begin(), va.end());
        std::vector<long> vb(n); for(long p = 0; p < n; p++){scanf("%ld", &vb[p]);}
        bool possible(true);
        for(long p = 1; possible && p < n; p++){
            if(vb[va[p - 1].second] > vb[va[p].second]){possible = false;}
        }

        if(!possible){puts("-1"); continue;}

        std::vector<std::pair<long, long> > s;
        for(long p = 0; p < n; p++){
            for(long q = 1; q < n; q++){
                if(wa[q - 1] <= wa[q]){continue;}
                long tmp = wa[q - 1]; wa[q - 1] = wa[q]; wa[q] = tmp;
                s.push_back(std::make_pair(q, q + 1));
            }
        }

        printf("%ld\n", s.size());
        if(s.empty()){continue;}
        for(long p = 0; p < s.size(); p++){printf("%ld %ld\n", s[p].first, s[p].second);}
        puts("");
    }

}

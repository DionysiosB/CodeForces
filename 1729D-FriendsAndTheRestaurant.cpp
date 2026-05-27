#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> x(n), y(n);
        for(long p = 0; p < n; p++){scanf("%ld", &x[p]);}
        for(long p = 0; p < n; p++){scanf("%ld", &y[p]);}

        std::vector<long> pos, neg; long cnt(0), rem(0);
        for(long p = 0; p < n; p++){
            long diff = y[p] - x[p];
            if(diff < 0){neg.push_back(diff);}
            else if(diff > 0){pos.push_back(diff);++rem;}
            else{++rem;}
        }

        sort(neg.rbegin(), neg.rend());
        sort(pos.begin(), pos.end());

        long idx(0);
        for(long p = 0; p < neg.size(); p++){
            while((idx < pos.size()) && (pos[idx] + neg[p] < 0)){++idx;}
            if((idx < pos.size()) && (pos[idx] + neg[p] >= 0)){++idx; ++cnt; --rem;}
        }

        cnt += rem / 2;
        printf("%ld\n", cnt);
    }

}

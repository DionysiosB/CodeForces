#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mxa(0);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]); mxa = (mxa > a[p]) ? mxa : a[p];}
        long m; scanf("%ld", &m);
        std::vector<std::pair<long, long> > bt(m); for(long p = 0; p < m; p++){scanf("%ld %ld", &bt[p].first, &bt[p].second);}
        sort(bt.rbegin(), bt.rend());
        if(mxa > bt[0].first){puts("-1"); continue;}

        std::vector<std::pair<long, long> > b; b.push_back(bt[0]);  //Needed to guarantee O(n) complexity after preprocessing
        for(long p = 1; p < m; p++){
            if(bt[p].second <= b.back().second){continue;}
            b.push_back(bt[p]);
        }


        long idx(0), mx(0), cur(0), cnt(0);
        for(long p = 0; p < n; p++){
            mx = (mx > a[p]) ? mx : a[p];
            if(mx <= b[idx].first && cur < b[idx].second){++cur;}
            else if(idx + 1 < b.size() && mx <= b[idx + 1].first){++idx; ++cur;} //Guaranteed to be cur < b[idx].second since strictly increasing
            else{idx = 0; cur = 1; ++cnt;}
        }

        printf("%ld\n", cnt + 1);
    }

    return 0;
}

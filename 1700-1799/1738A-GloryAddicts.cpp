#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<int> a(n); for(long p = 0; p < n; p++){scanf("%d", &a[p]);}
        std::vector<long> v, w; long long total(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(a[p]){v.push_back(x);}
            else{w.push_back(x);}
            total += 2 * x;
        }

        sort(v.begin(), v.end()); sort(w.begin(), w.end());
        if(v.size() == w.size()){total -= (v[0] < w[0]) ? v[0] : w[0];}
        else if(v.size() > w.size()){for(long p = 0; p < v.size() - w.size(); p++){total -= v[p];}}
        else if(w.size() > v.size()){for(long p = 0; p < w.size() - v.size(); p++){total -= w[p];}}
        printf("%lld\n", total);
    }

}

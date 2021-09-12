#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        std::vector<int> locked(n);
        std::vector<long> vl, vu;
        for(long p = 0; p < n; p++){
            scanf("%d", &locked[p]);
            if(locked[p]){vl.push_back(v[p]);}
            else{vu.push_back(v[p]);}
        }

        sort(vu.rbegin(), vu.rend());

        long a(0), b(0);
        for(long p = 0; p < n; p++){printf("%ld ", locked[p] ? vl[a++] : vu[b++]);}
        puts("");
    }

}

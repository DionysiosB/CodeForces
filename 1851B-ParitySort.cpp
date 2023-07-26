#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a, u, v;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            a.push_back(x % 2);
            if(x % 2){u.push_back(x);}
            else{v.push_back(x);}
        }

        sort(u.begin(), u.end());
        sort(v.begin(), v.end());

        bool res(true); long idxa(0), idxb(0);
        for(long p = 0; res && p < n; p++){
            if(a[p]){a[p] = u[idxa++];}
            else{a[p] = v[idxb++];}
            if(p > 0 && a[p - 1] > a[p]){res = false;}
        }

        puts(res ? "YES" : "NO");
    }

}

#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> v(2 * n);
        std::vector<long> w(n + 1);
        for(long p = 0; p < 2 * n; p++){
            scanf("%ld", &v[p]);
            if(p >= n){continue;}
            ++w[v[p]];
        }

        std::vector<long> a, b;
        for(long p = 1; p <= n; p++){
            if(w[p] == 2 && a.size() < 2*k){a.push_back(p); a.push_back(p);}
            else if(w[p] == 0 && b.size() < 2*k){b.push_back(p); b.push_back(p);}
        }

        while(a.size() < b.size()){b.pop_back();}
        while(b.size() < a.size()){a.pop_back();}
        for(long p = 1; a.size() < 2 * k && p <= n; p++){if(w[p] % 2){a.push_back(p); b.push_back(p);}}
        for(long p = 0; p < a.size(); p++){printf("%ld ", a[p]);}; puts("");
        for(long p = 0; p < b.size(); p++){printf("%ld ", b[p]);}; puts("");
    }


}

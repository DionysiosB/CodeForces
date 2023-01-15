#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::set<long> s;
        long cur(a.back());
        for(long p = n - 2; p >= 0; p--){
            if(a[p] > cur){s.insert(a[p]);}
            else{cur = a[p];}
        }

        bool flag(false);
        for(long p = n - 1; p >= 0; p--){
            if(flag){s.insert(a[p]);}
            else if(s.count(a[p])){flag = true;}
        }

        printf("%ld\n", s.size());
    }

}

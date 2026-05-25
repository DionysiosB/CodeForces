#include <cstdio>
#include <vector>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, d; scanf("%ld %ld %ld", &n, &k, &d);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

        std::map<long, long> s;
        for(long p = 0; p < d; p++){s[a[p]] = p;}
        long mn(s.size());
        for(long p = d; p < n; p++){
            long rem = a[p - d];
            long nxt = a[p];
            if(s[rem] == p - d){s.erase(rem);}
            s[nxt] = p;
            mn = (mn < s.size()) ? mn : s.size();
        }

        printf("%ld\n", mn);
    }

    return 0;
}

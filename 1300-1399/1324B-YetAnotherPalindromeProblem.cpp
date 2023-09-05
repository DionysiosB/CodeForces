#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::set<long> s;
        bool res(false);
        for(long p = 0; p + 1 < n; p++){
            if(s.count(a[p + 1])){res = true; break;}
            s.insert(a[p]);
        }

        puts(res ? "YES" : "NO");
    }

    return 0;
}

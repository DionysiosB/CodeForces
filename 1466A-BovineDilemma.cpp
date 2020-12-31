#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::set<long> s;
        for(long p = 0; p < n; p++){for(long q = p + 1; q < n; q++){s.insert(a[q] - a[p]);}}
        printf("%ld\n", s.size());
    }

}

#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}

    std::set<long> s; long ind(0), cnt(0);
    for(long p = 0; p < n; p++){
        while(ind < n && s.count(a[ind])){++ind;}
        if(ind < n && b[p] != a[ind]){++cnt;}
        s.insert(b[p]);
    }

    printf("%ld\n", cnt);

    return 0;
}

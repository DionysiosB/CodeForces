#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    std::set<long> s;
    long x(a[a.size() - 1]), y(0);
    for(long p = 0; p < n; p++){
        if((x % a[p] == 0) && (s.count(a[p]) == 0)){s.insert(a[p]);}
        else{y = a[p];}
    }

    printf("%ld %ld\n", x, y);

    return 0;
}

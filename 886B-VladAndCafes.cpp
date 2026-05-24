#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::set<long> s;
    long res(0);
    for(long p = n - 1; p >= 0; p--){
        if(s.count(a[p])){continue;}
        res = a[p];
        s.insert(a[p]);
    }

    printf("%ld\n", res);

    return 0;
}

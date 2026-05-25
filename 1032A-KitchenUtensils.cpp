#include <cstdio>
#include <vector>
#include <map>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::map<long, long> m;
    for(long p = 0; p < n; p++){++m[a[p]];}
    long mx(0);
    for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){
        long u = it->second;
        long tmp = k * ((u + k - 1) / k); mx = (mx > tmp) ? mx : tmp;
    }

    long stolen(0);
    for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){stolen += (mx - it->second);}
    printf("%ld\n", stolen);

    return 0;
}

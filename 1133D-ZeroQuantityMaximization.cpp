#include <cstdio>
#include <vector>
#include <map>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}

    std::map<std::pair<long, long>, long> m;
    long trivial(0);
    for(long p = 0; p < n; p++){
        if(a[p] == 0 && b[p] == 0){++trivial; continue;}
        else if(a[p] == 0){continue;}

        int s = 1;
        if(a[p] < 0){s *= -1; a[p] = -a[p];}
        if(b[p] < 0){s *= -1; b[p] = -b[p];}

        long g = gcd(a[p], b[p]);
        ++m[std::make_pair(s * b[p] / g, a[p] / g)];
    }

    long mx(0);
    for(std::map<std::pair<long, long>, long>::iterator it = m.begin(); it != m.end(); it++){
        long cnt = it->second;
        mx = (mx > cnt) ? mx : cnt;
    }

    printf("%ld\n", mx + trivial);

    return 0;
}

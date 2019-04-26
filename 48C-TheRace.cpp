#include <cstdio>
#include <set>

int main(){

    const long B = 1e6 + 7;

    long n; scanf("%ld", &n);
    std::set<long> s;
    long mx(0);
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s.insert(x); mx = (mx > x) ? mx : x;}
    double lower(1.0), upper(B), ref(0);
    for(long p = 1; p <= mx; p++){
        double cand = (p + 1.0) / (ref + 1.0);
        if(s.count(p)){upper = (upper < cand) ? upper : cand; ++ref;}
        else{lower = (lower > cand) ? lower : cand;}
    }

    if((1 + n) * (upper - lower) >= 1){puts("not unique");}
    else{
        puts("unique");
        long next = (1 + ref) * lower;
        printf("%ld\n", next);
    }

    return 0;
}

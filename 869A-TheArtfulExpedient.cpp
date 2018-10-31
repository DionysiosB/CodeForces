#include <cstdio>
#include <set>

int main(){

    long n; scanf("%ld", &n);
    std::set<long> a, b;
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); a.insert(x);}
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); b.insert(x);}

    long total(0);
    for(std::set<long>::iterator ita = a.begin(); ita != a.end(); ita++){
        for(std::set<long>::iterator itb = b.begin(); itb != b.end(); itb++){
            long x = *ita; long y = *itb; long z = x ^ y;
            if(a.count(z) || b.count(z)){++total;}
        }
    }

    puts((total & 1) ? "Koyomi" : "Karen");

    return 0;
}

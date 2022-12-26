#include <cstdio>
#include <map>

int main(){

    long n; scanf("%ld", &n);
    std::map<long, long> cnt;
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++cnt[x];}
    bool first(false);
    for(std::map<long, long>::reverse_iterator rit = cnt.rbegin(); rit != cnt.rend(); rit++){if((rit->second) & 1){first = true; break;}}
    puts(first ? "Conan" : "Agasa");

    return 0;
}

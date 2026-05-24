#include <cstdio>
#include <map>

int main(){

    long n; scanf("%ld", &n);
    std::map<long, long> m;
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        if(m.count(x) <= 0){m[x] = 0;}
        ++m[x];
    }

    if(m.size() != 2){puts("NO");}
    else{
        std::pair<long, long> a = *(m.begin());
        std::pair<long, long> b = *(++m.begin());
        if(a.second != b.second){puts("NO");}
        else{puts("YES"); printf("%ld %ld\n", a.first, b.first);}
    }

    return 0;
}

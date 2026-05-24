#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

struct obj{long initialPos, rank, lower, upper;};
bool objCompare(obj a, obj b){return a.rank < b.rank;}

int main(){

    long n, l, r; scanf("%ld %ld %ld", &n, &l, &r);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<obj> c(n);
    for(long p = 0; p < n; p++){
        long u; scanf("%ld", &u);
        c[p].initialPos = p;
        c[p].rank = u - 1;
        c[p].lower = l - a[p];
        c[p].upper = r - a[p];
    }

    sort(c.begin(), c.end(), objCompare);
    long last(-2e9);
    bool possible(true);
    std::vector<long> actual(n);
    for(long p = 0; p < n; p++){
        long w = c[p].initialPos;
        if(last < c[p].lower){actual[w] = c[p].lower;}
        else if(last < c[p].upper){actual[w] = last + 1;}
        else{possible = false; break;}
        last = actual[w];
    }

    if(!possible){puts("-1"); return 0;}
    std::vector<long> b(n);
    for(long p = 0; p < n; p++){b[p] = actual[p] + a[p];}
    for(long p = 0; p < n; p++){printf("%ld ", b[p]);}
    puts("");

    return 0;
}

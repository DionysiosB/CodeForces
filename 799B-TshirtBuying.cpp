#include <cstdio>
#include <vector>
#include <algorithm>

struct tshirt{
    long price, colf, colb; 
    bool taken;
};

bool tshirtCompare(tshirt a, tshirt b){return a.price < b.price;}

int main(){

    const int C = 3;
    long n; scanf("%ld", &n);
    std::vector<tshirt> a(n);
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); a[p].price = x; a[p].taken = false;}
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); a[p].colf = x;}
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); a[p].colb = x;}
    sort(a.begin(), a.end(), tshirtCompare);
    long m; scanf("%ld", &m);
    std::vector<long> ind(C, 0);
    for(long p = 0; p < m; p++){
        int r; scanf("%d", &r);
        while(ind[r] < n && (a[ind[r]].taken || ((a[ind[r]].colf != r) && (a[ind[r]].colb != r)))){++ind[r];}
        printf("%ld ", (ind[r] < n) ? a[ind[r]].price : (-1)); 
        if(ind[r] < n){a[ind[r]].taken = true; ++ind[r];}
    }

    return 0;
}

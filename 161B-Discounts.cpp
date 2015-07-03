#include <cstdio>
#include <vector>
#include <algorithm>

struct penstool{long order, price, kind;};
bool compenstool(penstool A, penstool B){
    if(A.kind == B.kind){return A.price > B.price;}
    else if(A.kind == 1){return 1;}
    else if(B.kind == 1){return 0;}
    return 0;
}

int main(){

    long n(0), k(0); scanf("%ld %ld\n", &n, &k);
    std::vector<penstool> itemVec(n + 1);

    long minPrice(1e9);
    for(int p = 1; p <= n; p++){
        itemVec[p].order = p;
        scanf("%ld %ld\n", &itemVec[p].price, &itemVec[p].kind);
        if(itemVec[p].price < minPrice){minPrice = itemVec[p].price;}
    }

    sort(++itemVec.begin(), itemVec.end(), compenstool);

    double totalPrice = 0;
    for(long p = 1; p <= n; p++){
        if(itemVec[p].kind == 1 && p < k){totalPrice += 0.5 * itemVec[p].price;}
        else{totalPrice += itemVec[p].price;}
    }
    if(itemVec[k].kind == 1){totalPrice -= 0.5 * minPrice;}

    printf("%.1lf\n", totalPrice);
    for(long p = 1; p < k; p++){printf("1 %ld\n", itemVec[p].order);}
    printf("%ld ", n - k + 1); for(long p = k; p <= n; p++){printf("%ld ", itemVec[p].order);}
    puts("");

    return 0;
}

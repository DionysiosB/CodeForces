#include <cstdio>
#include <vector>

int main(){

    long nr, nc; scanf("%ld %ld", &nr, &nc);
    std::vector<std::vector<long> > a(nr, std::vector<long>(nc, 0));
    for(long row = 0; row < nr; row++){for(long col = 0; col < nc; col++){scanf("%ld", &a[row][col]);}}

    std::vector<long> res(nr, 0);
    long ans(0); for(long row = 0; row < nr; row++){ans ^= a[row][0];}

    for(long row = 0; row < nr; row++){
        if(ans){break;}
        for(long col = 1; col < nc; col++){
            if(ans){break;}
            if(a[row][col] != a[row][res[row]]){ans ^= a[row][res[row]]; ans ^= a[row][col]; res[row] = col;}
            if(ans){break;}
        }
    }

    if(ans){puts("TAK"); for(long row = 0; row < nr; row++){printf("%ld ", 1 + res[row]);}; puts("");}
    else{puts("NIE");}


    return 0;
}

#include <cstdio>
#include <algorithm>

int main() {

    long t; scanf("%ld", &t);
    while (t--){
        long n; scanf("%ld", &n);
        long oddpos(1), evenpos(2), oddcount(0), evencount(0), oddfirst(0), evenfirst(0);
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            if(x % 2){
                oddfirst  += std::abs(p - oddpos);
                evenfirst += std::abs(p - evenpos);
                oddpos += 2; evenpos += 2;
                ++oddcount;
            }
            else{++evencount;}
        }

        long res(-1);
        if(oddcount == evencount){res = (oddfirst < evenfirst ? oddfirst : evenfirst);}
        else if(oddcount == evencount + 1){res = oddfirst;}
        else if(oddcount + 1 == evencount){res = evenfirst;}
        printf("%ld\n", res);
    }

}

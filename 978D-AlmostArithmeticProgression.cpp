#include <cstdio>
#include <vector>

    int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    if(n <= 2){puts("0");}
    else{
        long minCnt(-1);

        for(long x = -1; x <= 1; x++){
            long s = a[0] + x;
            for(long y = -1; y <= 1; y++){
                long d = a[1] + y - s;

                long cnt = (x != 0) + (y != 0);
                for(long p = 2; p < n; p++){
                    long expected = s + p * d;
                    if(a[p] == expected){continue;}
                    else if((a[p] == expected + 1) || (a[p] == expected - 1)){++cnt;}
                    else{cnt = -1; break;}
                }

                if(cnt >= 0){if((minCnt < 0) || (cnt < minCnt)){minCnt = cnt;}}
            }
        }


        printf("%ld\n", minCnt);

    }

    return 0;
}

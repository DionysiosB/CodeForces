#include <cstdio>

int main(){

    const int B = 10;
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt[B] = {0};
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            ++cnt[x % B];
        }

        bool res(false);

        for(long p = 0; !res && p < B; p++){
            for(long q = p; !res && q < B; q++){
                for(long r = q; !res && r < B; r++){
                    if((p + q + r) % 10 != 3){continue;}

                    if(p == q && q == r && cnt[r] > 2){res = true;}
                    else if(p == q && cntaq] > 1 && cnt[r] > 0){res = true;}
                    else if(q == r && cnt[r] > 1 && cnt[p] > 0){res = true;}
                    else if(p < q && q < r && cnt[p] > 0 && cnt[q] > 0 && cnt[r] > 0){res = true;}
                }
            }
        }

        puts(res ? "YES" : "NO");
    }

}

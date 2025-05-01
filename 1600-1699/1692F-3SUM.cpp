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
                    --cnt[p]; --cnt[q]; --cnt[r];
                    if(cnt[p] >= 0 && cnt[q] >= 0 && cnt[r] >= 0){res = true;}
                    ++cnt[p]; ++cnt[q]; ++cnt[r];

                    /*
                    printf("Testing: %ld %ld %ld  SUM:%ld\n", p, q, r, p + q + r);
                    printf("Counts:  "); for(long u = 0; u < B; u++){printf("%ld ", cnt[u]);}
                    puts("");
                    */


                }
            }
        }

        puts(res ? "YES" : "NO");
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mn(1e9 + 7), mx(-1e9), prev(-1), mxdf(-1);
        bool fill(false), taken(false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x < 0){
                fill = true;
                if(taken && (prev >= 0)){
                    mn = (mn < prev) ? mn : prev;
                    mx = (mx > prev) ? mx : prev;
                }
            }
            else{
                taken = true;
                if(prev < 0){
                    mn = (mn < x) ? mn : x;
                    mx = (mx > x) ? mx : x;
                }
                else{
                    long diff = x - prev;
                    if(diff < 0){diff = -diff;}
                    mxdf = (diff > mxdf) ? diff : mxdf;
                }
            }

            prev = x;
        }


        long pick(0), best(0);
        if(!taken){pick = best = 0;}
        else if(!fill){pick = 0; best = (mxdf > 0) ? mxdf : 0;}
        else{
            pick = (mn + mx) / 2; 
            best = mx - pick;
            best = (best > mxdf) ? best : mxdf;
        }

        printf("%ld %ld\n", best, pick);
    }

    return 0;
}

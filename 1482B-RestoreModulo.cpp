#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

        bool possible(true);
        long poscnt(0), negcnt(0), posdiff(0), negdiff(0);
        for(long p = 1; possible && p < n; p++){
            long diff = a[p] - a[p - 1];
            if(diff > 0){
                ++poscnt;
                if(!posdiff){posdiff = diff;}
                else if(diff != posdiff){possible = false;}
            }
            else if(diff < 0){
                ++negcnt;
                if(!negdiff){negdiff = diff;}
                else if(diff != negdiff){possible = false;}
            }
        }

        if(!poscnt && !negcnt){puts("0"); continue;}

        
        if(poscnt + negcnt < n - 1){possible = false;}

        if(!possible){puts("-1"); continue;}
        if(!poscnt || !negcnt){puts("0"); continue;}

        long c = posdiff;
        long m = posdiff - negdiff;

        if(a[0] >= m){possible = false;}
        for(long p = 1; possible && p < n; p++){
            long x = (a[p - 1] + c) % m;
            if(x != a[p]){possible = false;}
        }

        if(possible){printf("%ld %ld\n", m, c);}
        else{puts("-1");}
    }

}

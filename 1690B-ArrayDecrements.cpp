#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n);
        bool possible(true); long mxd(-1);
        for(long p = 0; p < n; p++){
            scanf("%ld", &b[p]);
            if(b[p] > a[p]){possible = false;}
            long diff = a[p] - b[p]; 
            mxd = (mxd > diff) ? mxd : diff;
        }

        for(long p = 0; possible && p < n; p++){
            long diff = a[p] - b[p];
            if(diff < mxd && b[p] != 0){possible = false;}
        }

        puts(possible ? "YES" : "NO");
    }

}

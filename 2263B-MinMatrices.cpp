#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        if(k < n || k >= 2 * n){puts("-1"); continue;}

        std::vector<std::vector<long> > m(n, std::vector<long>(n, 0));
        long idx(0), cnt(0), w(n);
        while(k - w < w - 1){m[idx][idx] = ++cnt; ++idx; --w; --k;}
        for(long col = idx; col < n; col++){m[idx][col] = ++cnt;}
        for(long row = idx + 1; row < n; row++){m[row][idx] = ++cnt;}
        for(long row = 0; row < n; row++){
            for(long col = 0; col < n; col++){
                if(!m[row][col]){m[row][col] = ++cnt;}
            }
        }

        for(long row = 0; row < n; row++){
            for(long col = 0; col < n; col++){printf("%ld ", m[row][col]);}
            puts("");
        }

    }

}

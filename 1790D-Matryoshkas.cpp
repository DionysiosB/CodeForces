#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n, 0);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        sort(v.begin(), v.end()); v.push_back(1e9 + 3);
        long prev(v[0]), cur(1), cnt(0), run(0);
        for(long p = 1; p <= n; p++){
            if(v[p] == prev){++cur;}
            else{
                if(cur < run){cnt += (run - cur); run = cur;}
                else{run = cur;}

                if(v[p] > prev + 1){cnt += run; run = 0;}
                cur = 1;
            }

            prev = v[p];
        }

        printf("%ld\n", cnt);
    }

}

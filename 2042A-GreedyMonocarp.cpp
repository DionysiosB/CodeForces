#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> v(n); long sum(0), mx(0);
        for(long p = 0; p < n; p++){
            scanf("%ld", &v[p]);
            mx = (mx > v[p] ? mx : v[p]);
            sum += v[p];
        }
        if(mx >= k){puts("0"); continue;}
        else if(sum <= k){printf("%ld\n", k - sum); continue;}
        sort(v.rbegin(), v.rend());
        long cs(0), res(0);
        for(long p = 0; p < v.size(); p++){
            cs += v[p];
            if(cs > k){break;}
            res = k - cs;
        }

        printf("%ld\n", res);
    }

}

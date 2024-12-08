#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n, 0), v(k, 0);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            long m = a[p] % k;
            if(v[m] < 0){continue;}
            else if(!v[m]){v[m] = p + 1;}
            else{v[m] = -1;}
        }

        long res(-1);
        for(long p = 0; res < 0 && p < k; p++){
            if(v[p] > 0){res = v[p]; break;}
        }

        if(res > 0){printf("YES\n%ld\n", res);}
        else{puts("NO");}
    }

}

#include <cstdio>
#include <vector>

int main(){

    std::vector<long> f(2); f[0] = 0; f[1] = 1;
    while(f.back() < 1e7){
        long n = f.size();
        f.push_back(f[n - 1] + f[n - 2]);
    }

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        if(k >= f.size()){puts("0"); continue;}

        long a(f[k - 2]), b(f[k - 1]);
        long cnt(0);
        for(long u = 0; u < 1e6; u++){
            long diff = n - a * u;
            if(diff < b * u){break;}
            cnt += (diff % b == 0);
        }

        printf("%ld\n", cnt);
    }


}

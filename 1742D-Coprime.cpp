#include <cstdio>
#include <vector>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long B = 1001;
    std::vector<std::vector<long> > m(B);
    for(long p = 1; p < B; p++){
        for(long q = 1; q < B; q++){
            if(gcd(p, q) > 1){continue;}
            m[p].push_back(q); m[q].push_back(p);
        }
    }

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> where(B, -1);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); where[x] = p + 1;}

        long res(-1);
        for(long p = 1; p < B; p++){
            if(where[p] < 0){continue;}
            for(long u = 0; u < m[p].size(); u++){
                long q = m[p][u]; 
                if(where[q] < 0){continue;}
                long sum = where[p] + where[q];
                res = (res > sum ? res : sum);
            }
        }

        printf("%ld\n", res);
    }

}

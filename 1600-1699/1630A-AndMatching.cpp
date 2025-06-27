#include <cstdio>
#include <vector>
 
int main(){
    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n / 2), b(n / 2);

        if(!k){for(long p = 0; p < n / 2; p++){a[p] = p; b[p] = p ^ (n - 1);}}
        else if(k < n - 1){
            long q = (k ^ (n - 1));
            long m = (k < q ? k : q);
            for(long p = 0; p < n / 2; p++){
                if(!p){a[p] = 0; b[p] = q;}
                else if(p == m){a[p] = k; b[p] = n - 1;}
                else{a[p] = p; b[p] = (p ^ (n - 1));}
            }
        }
        else if(k == n - 1){
            if(n == 4){puts("-1"); continue;}
            a[0] = n - 2; b[0] = n - 1;
            a[1] = 1; b[1] = n - 3;
            a[2] = 0; b[2] = 2;
            for(long p = 3; p < n / 2; p++){a[p] = p; b[p] = p ^ (n - 1);}
        }

        for(long p = 0; p < n / 2; p++){printf("%ld %ld\n", a[p], b[p]);}
    }
}

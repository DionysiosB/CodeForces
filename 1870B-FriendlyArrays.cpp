#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(m); for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}

        long A(0); for(long p = 0; p < n; p++){A ^= a[p];}
        if(n % 2){
            long mx(A); for(long p = 0; p < m; p++){mx |= b[p];}
            printf("%ld %ld\n", A, mx);
        }
        else{
            long mn(A); for(long p = 0; p < m; p++){mn &= ~b[p];}
            printf("%ld %ld\n", mn, A);
        }
    }

}

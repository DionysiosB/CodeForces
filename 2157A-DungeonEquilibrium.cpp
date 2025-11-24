#include <cstdio>

int main(){
    
    const int B = 107;
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long v[B] = {0};
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x);++v[x];}
        long cnt(0);
        for(long p = 0; p < B; p++){
            if(v[p] >= p){cnt += (v[p] - p);}
            else{cnt += v[p];}
        }
        
        printf("%ld\n", cnt);
    }
    
}

#include <cstdio>
#include <vector>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<bool> v(k - 1, 0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x + 1 < k){v[x] = 1;}
        }
        
        long mex(0);
        while(mex < v.size() && v[mex]){++mex;}
        printf("%ld\n", mex);
    }
    
}

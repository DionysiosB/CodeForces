#include <cstdio>
#include <vector>
#include <algorithm>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long &x : v){scanf("%ld", &x);}

        long left(-1), right(-1), target(-1);
        for(long p = 0; p < n; p++){
            if(left < 0 && v[p] + p != n){left = p; target = n - p;}
            if(v[p] == target){right = p;}
        }
        
        if(left >= 0){std::reverse(v.begin() + left, v.begin() + right + 1);}
        for(long x : v){printf("%ld ", x);}; puts("");
    }
    
}
